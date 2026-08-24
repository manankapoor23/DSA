class Solution {
public:
    bool canAliceWin(int n) {
        if(n==10){
            return true;
        }
        if(n<10){
            return false;
        }
        int currstone = n;
        for(int removestone =10;removestone>0;removestone-=2){
            // i is 10
            // check 12<10 no then curr = 2
            // losing condition for alice makes bob wins bcs alice wont be able to remove bcs currentstone < to be removed
            if(currstone<removestone){
                return false;
            }
            // but if she can then remove and move ahead for checking bob with rem to be stone - 1
            currstone = currstone - removestone;
            // 2<9 hence return true when bob loses
            // losing condition for bob makes alice win
            if(currstone<removestone-1){
                return true;
            }
            // else we move 
            currstone = currstone-removestone+1;
            // make bob lose 

        }
        return false;
        
    }
};