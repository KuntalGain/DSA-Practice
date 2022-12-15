//containes duplicate

//approch HashMap O(1)

#include<iostream>
#include<vector>
#include<map>

using namespace std;

bool containsDuplicate(vector<int>& v) {
    //enter your code

    //declaring a HashMap
    map<int,int> m;

    //extract data from array
    for(auto i : v)
        m[i]++;
    for(auto i : m) {
        if(i.second >= 2)
            return true;
    }

    return false;
}

//driver code

int main() {
    vector<int> v = {1,2,3,4};

    if(containsDuplicate(v) == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}