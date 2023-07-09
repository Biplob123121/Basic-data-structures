#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'R')
            {
                if (!st.empty() && st.top() == 'R')
                {
                    st.pop();
                }
                else if (!st.empty() && st.top() == 'B')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                }
                else if (!st.empty() && st.top() == 'G')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'Y')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('Y');
                    }
                }
                else
                {
                    st.push(ch);
                }
            }
            if (ch == 'G')
            {
                if (!st.empty() && st.top() == 'G')
                {
                    st.pop();
                }
                else if (!st.empty() && st.top() == 'B')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'C')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('C');
                    }
                }
                else if (!st.empty() && st.top() == 'R')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'Y')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('Y');
                    }
                }
                else
                {
                    st.push(ch);
                }
            }
            if (ch == 'B')
            {
                if (!st.empty() && st.top() == 'B')
                {
                    st.pop();
                }
                else if (!st.empty() && st.top() == 'R')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                }
                else if (!st.empty() && st.top() == 'G')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'C')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('C');
                    }
                }
                else
                {
                    st.push(ch);
                }
            }
        }
        stack<char> temp;
        while (!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        while (!temp.empty())
        {
            cout << temp.top();
            temp.pop();
        }
        cout << endl;
    }
    return 0;
}