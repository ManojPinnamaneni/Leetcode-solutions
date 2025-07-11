class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]) return 0;
        else if(target>nums.back()){
            return nums.size();
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }else if(nums[i]>target){
                return i;
            }
        }
        return 0;
    }
};