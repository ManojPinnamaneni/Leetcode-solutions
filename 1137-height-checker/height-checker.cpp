class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expec=heights;
        int ans=0;
        sort(expec.begin(),expec.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expec[i]){
                ans++;
            }
        }
        return ans;
    }
};