class Solution {
    public int countCommas(int n) {
        if(n<=999){
            return 0;
        }
        if(n<=9999){
            return n-999;
        }
        if(n<=100000){
            return (9001+n-10000);
        }
        return 0;
    }

}