class Solution {
   public:
    string encode(vector<string>& strs) {
        // "길이 + # + 실제 단어" 로 인코딩
        string encoded_string = "";
        for (auto &s : strs){
            encoded_string = encoded_string + std::to_string(s.size()) + "#" + s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        std::vector<string> decoded_list;
        int i = 0;
        while (i<s.length()){
            int j = i;
            // j : # 의 인덱스
            while (s[j] != '#'){
                j++;
            }
            // count : 문자열의 개수
            int count = std::stoi(s.substr(i, j-i));
            string temp = s.substr(j + 1, count);
            decoded_list.push_back(temp);
            i = j + count + 1;
        }
        return decoded_list;
    }
};
