class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>u;
        if(s.size()!=t.size()){
            return false;
        }
        for(auto i:s){
            u[i]++;
        }
        for(auto i:t){
            if(u.find(i)!=u.end()){
                u[i]=u[i]-1;
            }
            
        }
        for (auto i :u){
            if(i.second!=0){
                return false;
            }
        } 
        return true;
    }
};