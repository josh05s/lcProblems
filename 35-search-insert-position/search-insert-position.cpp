class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = nums.size(), lo = 0, hi = s - 1, mid;
        
        while (lo <= hi) 
        {
            mid = lo + (hi - lo)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }

        return lo;
    }
};