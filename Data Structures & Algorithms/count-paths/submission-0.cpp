class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>pathCount(m,vector<int>(n,0));
        pathCount[0][0] = 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i+1<m){
                    pathCount[i+1][j]+=pathCount[i][j];
                }
                if(j+1<n){
                    pathCount[i][j+1]+=pathCount[i][j];
                }
            }
        }
        return pathCount[m-1][n-1];
    }
};
