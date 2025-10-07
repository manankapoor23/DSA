class BrowserHistory {
public:
    class Node{
        public:
        string url;
        Node* back;
        Node* forward;
        Node(string u){
            url = u;
            back = NULL;
            forward=NULL;
        }
    };
    public:
    Node* curr;
    public:
    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        curr->forward=newNode;
        newNode->back=curr;
        curr=newNode;
        
    }
    
    string back(int steps) {
        while(steps){
            if(curr->back){
                curr=curr->back;
            }
            else{
                break;
            }
            steps--;
        }
        return curr->url;
        
    }
    
    string forward(int steps) {
        while(steps){
            if(curr->forward){
                curr=curr->forward;
            }
            else{
                break;
            }
            steps--;
        }
        return curr->url;
        
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */