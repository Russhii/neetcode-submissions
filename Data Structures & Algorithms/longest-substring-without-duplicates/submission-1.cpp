class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int res = 0;
        int n = s.length();
        unordered_map<char,int> mpp;
        for(int high =low; high<n; high++){
           if(mpp.find(s[high])!=mpp.end()){
              low = max(low,mpp[s[high]]+1);
           }
           mpp[s[high]] =high;
           res = max(res, high-low+1);
        }
        return res;
    }
};
