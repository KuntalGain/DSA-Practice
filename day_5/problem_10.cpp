#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    std::unordered_set<char> hor[9];
        std::unordered_set<char> ver[9];
        std::unordered_set<char> sqr[3][3];
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                char c = board[i][j];
                if(c != '.') {
                    if(ver[j].find(c) != ver[i].end()) return false;
                    if(hor[i].find(c) != hor[j].end()) return false;
                    if(sqr[i / 3][ j / 3].find(c) != sqr[i / 3][j / 3].end()) return false;
                    ver[j].insert(c);
                    hor[i].insert(c);
                    sqr[i / 3][j / 3].insert(c);
                }
            }
        }
        return true;
}

// driver code

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    if(isValidSudoku(board))
        cout << "True" << endl;
    else
        cout << "False" << endl;

}