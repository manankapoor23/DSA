class Solution {
public:
    void dfs(vector<vector<int>>&ans , int sr, int sc, int color,vector<int> &delrow,vector<int> &delcol,vector<vector<int>> &visited,int inicolor){
        visited[sr][sc]=1;
        ans[sr][sc]=color;
        for(int i =0;i<4;i++){
            int newrow = sr+delrow[i]; // 1+-1 =0, goes up
            int newcol = sc+delcol[i]; // 1+0 =1; SAME COL 
            if((newrow>=0 && newrow<ans.size())&& (newcol>=0 && newcol<ans[0].size())&&(visited[newrow][newcol]!=1 && ans[newrow][newcol]==inicolor)){
                // set it to the basecolor
                dfs(ans,newrow,newcol,color,delrow,delcol,visited,inicolor);
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // this  will be our color to chekc for since it is our base color
        // int color given is the color that has been given to us
        int inicolor = image[sr][sc];
        vector<vector<int>> ans = image;
        vector<vector<int>> visited(image.size()+1,vector<int>(image[0].size()+1,-1));
        vector<int> delrow ={-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        dfs(ans,sr,sc,color,delrow,delcol,visited,inicolor);
        return ans;
        


        
    }
};