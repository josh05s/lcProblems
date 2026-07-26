class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        // initialise integer count - increments for every two given integers sum less or equal to target int.
        const int mod = 1e9 + 7;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<int> pow2(n);
        pow2[0] = 1;
        for (int i = 1; i < n; i++) pow2[i] = pow2[i - 1] * 2 % mod;
        
        int lo = 0, hi = n - 1;
        long long count = 0;

        while (lo <= hi) {
            if (nums[lo] + nums[hi] <= target) {
                count = (count + pow2[hi - lo]) % mod;
                lo += 1;
            } else {
                hi -= 1;
            }
        }

        return(int) count;
    }
};