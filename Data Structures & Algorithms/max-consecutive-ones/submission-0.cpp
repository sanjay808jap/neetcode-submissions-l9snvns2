class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0,k=0;
        while (i<nums.size()){
            if(nums[i]==1){
                j++;
                if(j>k){
                    k=j;
                } 
                i++;
            }
            else{
                j=0;
                i++;
            }
        }
        return k;
    }
};