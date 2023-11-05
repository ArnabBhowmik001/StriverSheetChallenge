class Solution {
public:
    string frequencySort(string s) {
          unordered_map<char,int> mp;
        for(int i=0;i<s.length();++i){    //counting of frequency
            mp[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;
        for(auto itr:mp){             //push them in queue and also reverse them to sort according to frequency
            pq.push(pair(itr.second,itr.first));
        }

        string ans="";
        while(pq.empty()==false){    // while popping elements add the character in the answer string
            pair temp=pq.top();
            pq.pop();
            while(temp.first--){
                ans +=temp.second;
                }

        }
        return ans;
    }
};