class Solution {
public:
    bool checkRec(int x,int y,int x1, int y1, int x2, int y2){
        if(x>=x1 && x<=x2 && y>=y1&&y<=y2){
            return true;
        }
        return false;

    }

    bool checkCircle(int x,int y, int radius,int xCen, int yCen){
        if(pow((x-xCen),2) + pow((y-yCen),2) <= pow(radius,2)){
            return true;
        }
        return false;
    }
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // let int x and y be the common point, if it exisrs. return true and if it doesnt 
        // return false
        int x;
        int y;
        // im gonna test x and  y on all cases for x1x2y1y2 and find a point satisyfing both functions
        for(x=x1;x<=x2;x++){
            for(y=y1;y<=y2;y++){
                if(checkRec(x,y,x1,y1,x2,y2)&& checkCircle(x,y,radius,xCenter,yCenter)){
                    return true;
                }
            }
        }
        return false;



        
    }
};