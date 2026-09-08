class Solution {
    public int countCommas(int n) {
        if(n<=999){
            return 0;
        }
        if(n<=100000){
            return n-999;
        }

        return 0;
    }

}