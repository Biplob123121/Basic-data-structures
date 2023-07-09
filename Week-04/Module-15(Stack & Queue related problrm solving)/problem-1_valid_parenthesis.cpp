#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if (ch == '}' && !st.empty() && st.top() == '{')
        {
            st.pop();
        }
    }
}
int main()
{
    string s;
    cin >> s;
    return 0;
}