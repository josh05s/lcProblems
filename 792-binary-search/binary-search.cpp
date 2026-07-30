class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1; /* to stop search going out of bounds */

        while (lo <= hi) 
        {
            int mid = lo + (hi - lo)/2;

            if (nums[mid] == target) /* if the target integer is on the mid index, return that index. */
            {
                return mid;
            }

            if (nums[mid] < target) /* target is in the right half; shrinks search window by ignoring the previous lower bound if search is lower than the target result */
            {
                lo = mid + 1;
            }

            if (nums[mid] > target) /* target is in the left half; shrinks search window by ignoring the previous higher bound if search is higher than the target result */
            {
                hi = mid - 1;
            }
        }

        return -1; /* returns when no target integer was found in the nums array */
    }
};