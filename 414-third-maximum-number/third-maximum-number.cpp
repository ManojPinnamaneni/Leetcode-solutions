class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> a;
        for(int i=0;i<nums.size();i++){
            a.insert(nums[i]);
        }
        if (a.size() >= 3) {
            auto it = a.rbegin();
            advance(it, 2); 
            return *it;
        }
        return *a.rbegin(); 
    }
};