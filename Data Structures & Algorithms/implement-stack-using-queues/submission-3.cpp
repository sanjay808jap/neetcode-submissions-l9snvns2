class MyStack {
private:
    deque<int> arr;
    int j=-1;
    int val;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        arr.push_back(x);
        j++;
        if(j>0){
            for(int i=0;i<j;i++){
                arr.push_back(arr[i]);
            }
            for(int i=0;i<j;i++){
                arr.pop_front();
            }
        }
    }
    int pop() {
        val=arr[0];
        j--;
        arr.pop_front();
        return(val);
    }
    
    int top() {
        return(arr[0]);
    }
    
    bool empty() {
        if(arr.empty()){
            return true;
        }
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */