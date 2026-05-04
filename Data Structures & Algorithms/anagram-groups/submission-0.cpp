class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        std::unordered_map<string,vector<string>> mp;
        for(int i = 0; i < strs.size(); ++i){
            string origin = strs[i];
            string key = origin;
            std::sort(key.begin(),key.end());
            mp[key].push_back(origin);
            }

        for(auto it : mp){
            result.push_back(it.second);
        }
        return result;
    }
    
};
