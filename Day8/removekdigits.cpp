class Solution {
    public:
        string removeKdigits(string num, int k) {
            string res = "";
    
            for (char digit:num){
                while(!res.empty() and k>0 and res.back()>digit){
                    res.pop_back();
                    k--;
                }
                res.push_back(digit);
            }   
            while(k-->0 and ! res.empty()){
                res.pop_back();
            }
            int start=0;
            while(start<res.size() and res[start]=='0'){
                start++;
            }
            res = res.substr(start);
             return res.empty() ? "0" : res;
    
        }
    };