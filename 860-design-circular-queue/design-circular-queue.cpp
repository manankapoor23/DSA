class MyCircularQueue {
public:
        int size;
        int front;
        int rear;
        int *arr;
    MyCircularQueue(int k) {
        size = k;
        front =-1;
        rear =-1;
        arr = new int[k];
    }
    
    bool enQueue(int value) {
        // check full conditions 
        if(rear==size-1 && front==0){
            return false;
        }
        // check full conditions when rear is before front 
        if((rear+1)%size==front){
            return false;
        }

        else{
            // [][][][f][1][2][r] this case 
            if(front!=0 && rear==size-1){
                rear=0;
                arr[rear]=value;
                
                return true;
            }
            else if(front==-1){
                front =0;
                rear=0;
                arr[front]=value;
                return true;
            }
            // [f][1][2][3][r][]
            else{
                rear++;
                arr[rear]=value;
                return true;
            }
        }

    }
    
    bool deQueue() {
        if(front==-1){
            return false;
        }
        //single element
        if(front==rear){
            front = -1;
            rear=- 1;
            return true;
        }
        else if(front == size-1){
            front =0;
            return true;
        }
        else{
            front++;
            return true;
        }
        
    }
    
    int Front() {
        if(front!=-1)
        return arr[front];
        else{
            return -1;
        }
        
    }
    
    int Rear() {
        if(front!=-1)
        return arr[rear];
        else{
            return -1;
        }
        
    }
    
    bool isEmpty() {
        if(front== -1){
            return true;
        }
        else{
            return false;
        }
        
    }
    
    bool isFull() {
        if((rear+1)%size==front|| (front ==0 && rear == size-1)){
            return true;
        }
        else{
            return false;
        }
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */