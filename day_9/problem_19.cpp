#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        
        //creating a Stack
        stack <char> st;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(st.empty())
                st.push(s[i]);
            else if((st.top() == '(' && s[i] == ')') ||
                    (st.top() == '{' && s[i] == '}') ||
                   (st.top() == '[' && s[i] == ']'))
                st.pop();
            else
                st.push(s[i]);
        }
        
        if(st.empty())
            return true;
        else
            return false;
    }

// driver code
int main()
{
    string str = "()";
    if(isValid(str))
        cout << "string is valid" << endl;
    else
        cout << "string is Not valid" << endl;

}