class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> a;
        vector<string> ans;
        for(int i=0;i<names.size();i++){
            a.push_back({names[i],heights[i]});
        }
        sort(a.begin(),a.end(),[](const auto& a , const auto& b){
            return a.second>b.second;
        });
        for(auto x:a){
            ans.push_back(x.first);
        }
        return ans;
    }
};