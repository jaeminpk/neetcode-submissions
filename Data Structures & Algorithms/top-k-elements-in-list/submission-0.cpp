class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        for(auto& it : nums){
            freq[it]++;
        }
        std::vector<vector<int>> bucket(nums.size()+1);
        for(auto const& it2 : freq){
            bucket[it2.second].push_back(it2.first);
        }

        vector<int> result;

        for (int i = nums.size(); i >= 0 && result.size() < k; --i){
            for(auto& it3 : bucket[i]){
                result.push_back(it3);
            }
            if(result.size() == k){
                break;
            }

        }
        return result;
    }
};
