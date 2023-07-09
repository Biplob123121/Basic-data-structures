#include <bits/stdc++.h>
using namespace std;
void isValid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == 'A' && !st.empty() && st.top() == 'B')
        {
            st.pop();
        }
        else if (ch == 'B' && !st.empty() && st.top() == 'A')
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }
    if (st.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        isValid(str);
    }

    return 0;
}