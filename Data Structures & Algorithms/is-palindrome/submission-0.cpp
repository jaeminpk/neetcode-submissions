class Solution {
public:
    bool isPalindrome(string s) {
        string result = std::regex_replace(s, std::regex("[^a-zA-Z0-9]"), "");
        std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
        if(result.length() % 2 == 0){
            for(int i = 0; i < (result.size() / 2); ++i){
                if(result[i] != result[result.size() - 1 - i]){
                    return false;
                }
            }
        } else {
            for(int i = 0; i < (result.size() / 2); ++i){
                    if(result[i] != result[result.size() - 1 - i]){
                    return false;
                }
            }
        }
        return true;
    }
};
