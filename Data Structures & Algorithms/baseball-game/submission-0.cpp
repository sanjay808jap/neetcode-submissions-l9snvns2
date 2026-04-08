class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int top=-1,sum=0;
        for(int i =0;i<operations.size();i++){
            if(operations[i]!="+" && operations[i]!="C" && operations[i]!="D"){
                int num=stoi(operations[i]);
                top++;
                record.push_back(num);
                sum+=num;
            }
            else{
                if(operations[i]=="+"){
                    record.push_back(record[top]+record[top-1]);
                    top++;
                    sum+=record[top];
                }
                else if(operations[i]=="C"){
                    sum-=record[top];
                    record.pop_back();
                    top--;
                }
                else if(operations[i]=="D"){
                    record.push_back(2*record[top]);
                    top++;
                    sum+=record[top];
                }
                
                }
            }
            return sum;
        }

    
};