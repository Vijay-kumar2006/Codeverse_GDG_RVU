class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> st;
            for(int i=0;i<tokens.size();i++){
                if(tokens[i]!="+" and tokens[i]!="-" and tokens[i]!="*" and tokens[i]!="/"){
                    st.push(stoi(tokens[i]));
                }else{
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    if(tokens[i]=="+"){
                        st.push(b+a);
                    }
                    else if (tokens[i]=="-"){
                        st.push(b-a);
                    }
                    else if(tokens[i]=="*"){
                        st.push(b*a);
                    }
                    else{
                        st.push(b/a);
                    }
                }
            }
            return st.top();
        }
    };