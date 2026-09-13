class Solution {
public:
    int countsame(vector<vector<int>>& img1, vector<vector<int>>& img2, int rowoff, int coloff){
        int n = img1.size();
        int count =0;
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                // we can either overlap img1 on img2 or img 2 on img1, lets say we overlap img2 hence we use offset ofr that. imaghe bcs we are not moving img1, and hence it wont need offset
                int img_i = i+rowoff;
                int img_j = j+coloff;
                if(img_i<0 || img_i >=n || img_j<0 || img_j>=n){
                    continue;
                }
                if(img1[i][j]==1 && img2[img_i][img_j]==1){
                    count++;
                }
            }
        }
        return count;
        

    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int maxOverlap =INT_MIN;
        int n = img1.size();

        for(int row_off=-n+1;row_off<n;row_off++){
            for(int col_off=-n+1;col_off<n;col_off++){
                // check count(img1,img2,ro,co);
                // lets say n =2 hence rowoff -1,0,1 
                // and col off too
                // first function call for rowoff. as -1 and coloff as -1,0,-1
                // count(a,b,-1,-1)
                // count function checks both of the vectors 
                int count = countsame(img1,img2,row_off,col_off);
                maxOverlap = max(maxOverlap,count);
            }
        }
        return maxOverlap;
        
    }
}; 