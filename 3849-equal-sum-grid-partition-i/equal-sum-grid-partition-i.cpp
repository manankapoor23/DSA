class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size(); // rows 
        int m = grid[0].size(); // cols
                // rowsum colsum arrays banao
        vector<long long> rowsum(n,0);
        vector<long long> colsum(m,0);

        long long total =0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                total+=grid[i][j];
                rowsum[i]+=grid[i][j];
                colsum[j]+=grid[i][j];
            }
        }
        if(total%2!=0){
            return false;
        }

        long long upper =0;
        for(int i =0;i<n-1;i++){
            upper+=rowsum[i];
            if(upper==total-upper){
                return true;
            }


        }

        long long side =0;
        for(int j=0;j<m-1;j++){
            side+=colsum[j];
            if(side==total-side){
                return true;
            }

        }
        return false;

        
    }
};