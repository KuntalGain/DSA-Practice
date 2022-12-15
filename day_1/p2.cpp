//maximum subarray

//O(N) approch

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maximumSubarray(vector<int> &arr) {
    int currSum = INT_MIN;
    int maxSum = 0;

    for(auto i : arr) {
        currSum = max(i,currSum+i);
        maxSum = max(maxSum,currSum);
    }

    return maxSum;
}

//driver code

int main() {
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};

    int ans = maximumSubarray(v);

    cout << ans << endl;
}