class Solution {
public:
   void generate(vector<string>& a,int n,int open ,int close,string curr_str){
       if(curr_str.length()==2*n){
           a.push_back(curr_str);
           return ;
       }
       if(open<n){
           curr_str+='(';
           generate(a,n,open+1,close,curr_str);
           curr_str.pop_back();
       }
       if(close<open){
           curr_str+=')';
           generate(a,n,open,close+1,curr_str);
           curr_str.pop_back();
       }
   }
    vector<string> generateParenthesis(int n) {
        vector<string> a;
        generate(a,n,0,0,"");
        return a;
    }
};