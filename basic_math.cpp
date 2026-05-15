
//Print all Divisors of a given Number
//brute force approach
#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){

    vector<int> div;
  for(int i=2; i<=n; i++){
    if(n%i==0){
      div.push_back(i);
    }
  }
    return div;

}

int main() {
  int n;
  cin>>n;
  vector<int> div = divisors(n);
  for (int x:div){
    cout<<x<<" ";
  }
  return 0;
}


//Optimized approach
#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){

    vector<int> div;
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
        div.push_back(i);
        if(i!=n/i){
            div.push_back(n/i);
        }
    }
  }
  return div;
}
 
int main() {
  int n;
  cin>>n;
  vector<int> div = divisors(n);
  for (int x:div){
    cout<<x<<" ";
  }
  return 0;
}
    

