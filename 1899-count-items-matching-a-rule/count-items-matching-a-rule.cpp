class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int k,ans=0;
        if(ruleKey=="type"){
            k=0;
        }else if (ruleKey=="color"){
            k=1;
        }else{
            k=2;
        }
        for(int i=0;i<n;i++){
            if(items[i][k]==ruleValue){
                ans++;
            }
        }
        return ans;
    }
};