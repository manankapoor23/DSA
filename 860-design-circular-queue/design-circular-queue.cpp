class MyCircularQueue {
public:
    int size, front, rear;
    int* arr;

    MyCircularQueue(int k) {
        size = k;
        front = -1;
        rear = -1;
        arr = new int[k];
    }
    
    bool enQueue(int value) {
        // full
        if ((rear + 1) % size == front) return false;

        // first element
        if (front == -1) front = 0;

        rear = (rear + 1) % size;
        arr[rear] = value;

        return true;
    }
    
    bool deQueue() {
        // empty
        if (front == -1) return false;

        // single element
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return true;
    }
    
    int Front() {
        return (front == -1) ? -1 : arr[front];
    }
    
    int Rear() {
        return (front == -1) ? -1 : arr[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return (rear + 1) % size == front;
    }
};