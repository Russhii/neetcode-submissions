class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mpp;
        for(string word:strs){
           string orignal = word;
           sort(word.begin(),word.end());
           string key = word;
           mpp[key].push_back(orignal);
        }
        vector<vector<string>> ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};
