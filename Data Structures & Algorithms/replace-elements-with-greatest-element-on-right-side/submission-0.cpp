class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=(arr.size())-1;
        int max=arr[n];
        int max1=max;
        arr[n]=-1;
        for(int i=(n-1);i>-1;i--){
            if(arr[i]>max){
                max1=arr[i];
                arr[i]=max;
                max=max1;
            }
            else{
                arr[i]=max;
            }
                
        }
        return arr;
    }
};