class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    //     int fst_num = 0;
    //     int snd_num = 0;
    //     for(int i = 0; i < numbers.size(); ++i){
    //         fst_num = numbers[i];
    //         snd_num = target - numbers[i];
    //         if (std::find(numbers.begin(), numbers.end(), snd_num) != numbers.end()){
    //             break;
    //         }
    //     }
    //     int fst_idx = *std::find(numbers.begin(), numbers.end(), fst_num) + 1;
    //     int snd_idx = std::find(numbers.begin(), numbers.end(), snd_num) + 1;
    //     vector<int> result = {fst_idx,snd_idx};
    //     return result;
    // }
    int idx1 = 0;
    int idx2 = numbers.size() - 1;
        while(idx1 < idx2){
            if(numbers[idx1] + numbers[idx2] == target){
                return {idx1 + 1, idx2 + 1};
            } else if(numbers[idx1] + numbers[idx2] < target){
                idx1++;
            } else {
                idx2--;
            }
    }
    return {};
    }
};
