#include<iostream>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &mat , int key) {
    int row = 0;
    int col = mat[row].size() - 1;

    while(row < mat.size() && col >= 0) {

        // if target is found
        if(mat[row][col] == key)
            return true;
        
        if(mat[row][col] < key)
            row++;
        else
            col--;
    }

    return false;
}

//driver code

int main() {
    vector<vector<int>> mat = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
        };

    if(searchMatrix(mat,13))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}