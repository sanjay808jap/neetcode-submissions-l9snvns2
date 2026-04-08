class Solution {
  public:
      bool isValid(string s){
              vector <char> arr;
                for(auto &op:s){
                if(op=='['||op=='('||op=='{'){
                        arr.push_back(op);
                        }
                else{
                if (arr.empty()) return false;
                else if(op==']'){
                        if(arr.back()=='[') arr.pop_back();
                        else return false;
                        }
                else if(op=='}'){
                        if(arr.back()=='{') arr.pop_back();
                        else return false;
                        }
                else if(op==')'){
                        if(arr.back()=='(') arr.pop_back();
                        else return false;
                        }
                }
                }
                if (arr.size()!=0) return false;
                else return true;
        }
};