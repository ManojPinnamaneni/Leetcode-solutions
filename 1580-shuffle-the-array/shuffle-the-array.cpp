// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             ans.push_back(nums[i]);
//             ans.push_back(nums[n+i]);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

       int i = 0;
       int j = n;

       vector<int> ans;

       while(i <= n && j < nums.size()){

        ans.push_back(nums[i]);
        ans.push_back(nums[j]);

        i++;
        j++;

       }

        return ans;
    }
};