// ransome note

#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

bool isAnagram(string s, string t) {

    //sort the string
    sort(t.begin(),t.end());
    sort(s.begin(),s.end());

    if(s == t)
        return true;
    else
        return false;

}

// driver code

int main()
{
    string str1,str2;
    cin >> str1 >> str2;

    if(isAnagram(str1,str2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}