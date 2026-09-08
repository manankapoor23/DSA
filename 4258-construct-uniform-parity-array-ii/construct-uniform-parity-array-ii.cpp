class Solution {
public:
    bool a1 = true;
    int smallest = INT_MAX;
    bool uniformArray(vector<int>& nums1) {
        for(int i =0;i<nums1.size();i++){
            smallest = min(smallest,nums1[i]);
        }
        if(nums1[0]%2==0){
            // try making even
            int i =1;
            while(i<nums1.size()){
                if(nums1[i]%2==0){
                    a1 = true;
                }
                if(nums1[i]%2!=0){
                    // odd pe crash 
                    if((nums1[i]-smallest)%2==0){
                        a1=true;
                    }
                    else{
                        a1=false;
                        return a1;
                    }
                }
                i++;
            }
            
            
        }
        else{
            // first is odd try making odd
            int k =1;
            while(k<nums1.size()){
                if(nums1[k]%2!=0){
                    a1=true;
                }
                else{
                    if((nums1[k]-smallest)%2!=0){
                        a1=true;
                    }
                    else{
                        a1=false;
                        return a1;
                    }
                }
                k++;
            }


        }
        return a1;
        
    }
};