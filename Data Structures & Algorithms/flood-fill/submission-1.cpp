class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>>q;
        int n=image.size();
        int m=image[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        q.push({sr,sc});
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();
            int c=image[x][y];
            image[x][y]=color;
            vis[x][y]=true;
            int dr[4]={-1,1,0,0};
            int dc[4]={0,0,-1,1};
            for(int i=0;i<4;i++){
                int nx=x+dr[i];
                int ny=y+dc[i];
                if(nx>=0&&nx<n&&ny>=0&&ny<m&&!vis[nx][ny]&&image[nx][ny]==c){
                    q.push({nx,ny});
                }
            }
        }
        return image;
    }
};