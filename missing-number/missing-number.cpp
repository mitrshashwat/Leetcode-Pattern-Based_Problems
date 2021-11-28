class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k = nums.size();
        int sum = k*(k+1)/2;
        
        for(int i=0; i<k; i++){
            sum = sum - nums[i];
        }
        
        return sum;
    }
};