// ransome note

#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char , int > mp;

    for(auto i : magazine)  mp[i]++;

    for(auto i : ransomNote) {
        if(!mp[i]--)
            return false;
    }

    return true;
}

// driver code

int main()
{
    string str1,str2;
    cin >> str1 >> str2;

    if(canConstruct(str1,str2))
        cout << "Can be constructed" << endl;
    else
        cout << "Cannot be constructed" << endl;
    
    return 0;
}