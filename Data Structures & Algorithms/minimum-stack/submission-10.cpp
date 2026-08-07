class MinStack {
private:
    int currmin;
    vector<int> arr;
    vector<int> arr1;
public:
    MinStack() {
        currmin=INT_MAX;
    }
    
    void push(int val) {
        if(val<=currmin){
            currmin=val;
            arr1.push_back(val);
        }
        arr.push_back(val);
    }
    
    void pop() {
        if(arr1.empty()){
            arr.pop_back();
        }
        else{
            if(arr.back()==arr1.back()){
            arr1.pop_back();
            arr1.empty()? currmin=INT_MAX:currmin=arr1.back();
        }
        arr.pop_back();
        }
        
    }
    
    int top() {
        return(arr.back());
    }
    
    int getMin() {
        return(arr1.back());
    }
};
