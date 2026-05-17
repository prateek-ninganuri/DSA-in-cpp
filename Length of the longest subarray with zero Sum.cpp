class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){

        int x = 0;
        int y = 0;

        long long sum = 0;

        int maxlen = 0;
        int n = nums.size();

        while(y < n){

            sum += nums[y];

            // shrink window
            while(sum > k){

                sum -= nums[x];
                x++;
            }

            // valid window
            if(sum == k){

                maxlen = max(maxlen, y - x + 1);
            }

            y++;
        }

        return maxlen;
    }
};