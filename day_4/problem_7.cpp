// reshape matrix

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r*c != nums[0].size()*nums.size()) return nums;
        
        vector<vector<int>> res(r, vector<int>(c,0));
        int nums_r = 0, nums_c = 0, res_r = 0, res_c = 0;
        
        while(res_r < r && nums_r < nums.size())
        {
            res[res_r][res_c] = nums[nums_r][nums_c];
            if(res_c == c-1)
            {
                res_r++;
                res_c=0;
            }
            else res_c++;
            
            if(nums_c == nums[0].size()-1)
            {
                nums_r++;
                nums_c=0;
            }
            else nums_c++;
        }
              
        return res;
    }


//driver code

int main() {
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};

    vector<vector<int>> res = matrixReshape(v,3,4);

    for(int i = 0 ; i < res.size() ; i++) {
      for(int j = 0 ; j < res[i].size() ; j++) {
        cout << res[i][j] << " ";
      }
    }
}