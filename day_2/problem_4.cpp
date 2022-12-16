//merge sorted array

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void merge(vector<int> &n1 , int m , vector<int> &n2 , int n) {
    for(int i = m ; i < n + m ; i++) {
        n1[i] = n2[i-m];
    }

    sort(n1.begin(),n2.end());
}

//driver code

int main() {
    
    vector<int> n1 , n2;
    n1 = {1,2,3,0,0,0};
    n2 = {2,5,6};

    int n = 3 , m = 3;

    merge(n1,m,n2,n);

    for(auto i : n1) {
        cout << i << " ";
    }


}
