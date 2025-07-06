class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n=score.size();
        int m=score[0].size();
        for(int i=0;i<n;i++){
            int maxi=INT_MIN,maxir=-1;
            for(int j=i;j<n;j++){
                if(score[j][k]>maxi){
                    maxi=score[j][k];
                    maxir=j;
                }
            }
            for(int j=0;j<m;j++){
                swap(score[i][j],score[maxir][j]);
            }
        }
        return score;
    }
};