class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair< int,char>> pq;

        for(char ch: s)
            mp[ch]++;
        for(auto it: mp)
            pq.push({it.second, it.first}); 

        string ans;
        while(!pq.empty())
        {
            pair<int,char> curr=pq.top();
            pq.pop();
            int freq=curr.first;
            while(freq>0)
            {
                ans.push_back(curr.second);
                freq--;
            }
        
        }  
            return ans;     
    }
};