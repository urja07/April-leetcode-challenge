class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
     unordered_map <string,vector<string>> str;
        int n=strs.size();
        string temp;
        for(int i=0;i<n;i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            str[strs[i]].push_back(temp);
        }
        vector<vector<string>> res;
        for(auto it=str.begin();it!=str.end();it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};
