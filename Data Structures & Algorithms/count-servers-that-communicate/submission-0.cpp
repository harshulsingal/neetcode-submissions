class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> rowSum(n,0);
        vector<int> colSum(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowSum[i]+=grid[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                colSum[j]+=grid[i][j];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&(rowSum[i]>1||colSum[j]>1)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};