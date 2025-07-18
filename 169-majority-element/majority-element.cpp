class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> a;
        int n=nums.size();
        for(int i=0;i<n;i++){
            a[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(a[nums[i]]>n/2){
                return nums[i];
            }
        }
        return 0;
    }
};