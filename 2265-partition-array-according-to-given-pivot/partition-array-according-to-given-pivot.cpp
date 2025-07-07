class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l,e,g;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                l.push_back(nums[i]);
            }else if(nums[i]>pivot){
                g.push_back(nums[i]);
            }else{
                e.push_back(nums[i]);
            }
        }
        nums.resize(0);
        for(int i=0;i<l.size();i++){
            nums.push_back(l[i]);
        }
        for(int i=0;i<e.size();i++){
            nums.push_back(e[i]);
        }
        for(int i=0;i<g.size();i++){
            nums.push_back(g[i]);
        }
        return nums;
    }
};