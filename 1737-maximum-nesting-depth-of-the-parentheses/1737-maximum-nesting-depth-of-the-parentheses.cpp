class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int c =0;
        int maxi =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                c++;
            }
            else {
                 if(!st.empty() && s[i]==')') {
                   st.pop();
                   c--;
                 }
            }
            maxi = max(maxi,c);
        }
        return maxi;
    }
};