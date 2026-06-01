class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //각 elements - 1이 nums 안에 존재하지 않을때 : sequence 의 start로 정의가능
        //unordered set은 이렇게도 설정이 가능!!
         std::unordered_set<int> nums_set(nums.begin(), nums.end());
         // return 값이 int로 최대 연속 시퀀스 개수니까 개수만 카운트 하면 됨
         // 가장 큰 개수를 카운트 해야하기 때문에, for loop 밖에 가장큰 int 정의
         int largest_seq = 0;
         for(auto num : nums_set){
            if(nums_set.find(num - 1) == nullptr) {
                int start = num;
                int num_seq = 1;

                while(nums_set.find(start + 1) != nullptr) {
                    start = start + 1;
                    num_seq = num_seq + 1;
                }
                largest_seq = max(largest_seq, num_seq);
            }

         }
         return largest_seq;
    }
};
