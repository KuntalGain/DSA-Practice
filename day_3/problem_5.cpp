// Intersection of two Arrays

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<int> intersect (vector<int> &A , vector<int> &B) {
    
    // error case

    if(A.size() == 0 || B.size() == 0)
        return vector<int>();
    
    //resultant vector
    vector<int> res;

    // create HashMap
    unordered_map<int,int> mp;

    for(auto i : A) mp[i]++;

    for(auto i : B) {
        if(mp[i] > 0) {
            res.push_back(i);
            mp[i]--;
        }
    }

    return res;
    
}

// driver code

int main () {

    vector<int> v1,v2;

    v1 = {4,9,5};
    v2 = {9,4,9,8,4};

    vector<int> res = intersect(v1,v2);

    for(auto i : res)
        cout << i << " ";

}