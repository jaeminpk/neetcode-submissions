class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // checking row dups
        for(int i = 0;  i < 9; ++i){
            std::unordered_set<char> row_elts;
            for(int j = 0; j < 9; ++j){
                char current_value = board[i][j];
                if(current_value != '.'){
                    if(row_elts.insert(current_value).second == false){
                    return false;
                    }
                }
            }
        }
        // checking col dups
        for(int j = 0;  j < 9; ++j){
            std::unordered_set<char> col_elts;
            for(int i = 0; i < 9; ++i){
                char current_value = board[i][j];
                if(current_value != '.'){
                    if(col_elts.insert(current_value).second == false){
                    return false;
                    }  
                }

            }
        }
        // checking sqr dups
        for(int box = 0;  box < 9; ++box){
            std::unordered_set<char> sqr_elts;
            for(int k = 0; k < 9; ++k){
                int row = (box / 3) * 3 + k / 3;
                int col = (box % 3) * 3 + k % 3;
                char current_value = board[row][col];
                                if(current_value != '.'){
                    if(sqr_elts.insert(current_value).second == false){
                    return false;
                    }  
                }
            }
        }
        return true;
    }
};
