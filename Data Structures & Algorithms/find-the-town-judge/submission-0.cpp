class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> adjMatrix(n,vector<int>(n,0));
        int m=trust.size();
        for(int i=0;i<m;i++){
            adjMatrix[trust[i][0]-1][trust[i][1]-1]=1;
        }
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                cnt+=adjMatrix[i][j];
            }
            if(cnt==0){
                bool flag=true;
                for(int j=0;j<n;j++){
                    if(adjMatrix[j][i]!=1&&i!=j){
                        flag=false;
                    }
                }
                if(flag){
                    return i+1;
                }
            }
        }
        return -1;
    }
};