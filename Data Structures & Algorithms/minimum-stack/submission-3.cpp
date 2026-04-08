class MinStack {
public:
    vector <int> arr;
    vector<int>arr1; 
    int min=INT_MAX; 
    MinStack() { 
    }
    void push(int val) {
        arr.push_back(val);
        if (val<=min){
            min=val;
            arr1.push_back(min);
        }
    }
    
    void pop() {
        if(arr.back()==arr1.back()){
            arr1.pop_back();
        } 
        arr.pop_back();
        if(arr1.empty()) min=INT_MAX;
        else min=arr1.back();
    }
    
    int top() {
        return(arr.back());
    }
    
    int getMin() {
        return(min);
    }
};
