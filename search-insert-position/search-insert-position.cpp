class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lower = 0, upper = n, mid;
        while(lower < upper) {
            mid = lower + (upper - lower) / 2;
            
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target) lower = mid + 1;
            else upper = mid;
        }
        return lower;
        
    }
};