#include <bits/stdc++.h>
using namespace std;
void isSame(stack<int> st, queue<int> q)
{
    if (st.size() != q.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        int flag = 1;
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = 0;
                break;
            }
            st.pop();
            q.pop();
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    isSame(st, q);
    return 0;
}