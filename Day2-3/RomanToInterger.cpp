class Solution {
    public:
        int romanToInt(string s) {
            int total = 0;
            int prev = 0;
    
            for (char c:s){
                int cur=0;
                switch(c){
                    case 'I':cur =1;break;
                    case 'V':cur =5;break;
                    case 'X':cur =10;break;
                    case 'L':cur =50;break;
                    case 'C':cur =100;break;
                    case 'D':cur =500;break;
                    case 'M':cur =1000;break;
    
                }
    
                if(cur>prev){
                    total+=(cur-2*prev);
                }
                else{
                    total+=cur;
                }
                prev = cur;
    
            }
            return total;
        }
    };