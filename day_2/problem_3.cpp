// Two Sum

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>&arr,int target) {
    
    int n = arr.size();

    for(int i = 0 ; i < n ; i++) {
        for(int j = i+1 ; j < n ; j++) {
            if(arr[i] + arr[j] == target) {
                return {i,j};
            }
        }
    }

    return {};
}

//Driver code

int main() {
    vector<int> ans;
    vector<int> v = {2,7,11,15};

    ans = twoSum(v,9);

    for(auto i : ans)
        cout << i << " ";
}