#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int query;
    cin >> query;
    cin.ignore();
    while (query--)
    {
        string s;
        getline(cin, s);
        int length = s.size();
        char x;
        string name;
        if (length > 1)
        {
            stringstream ss(s);
            ss >> x;
            ss >> name;
        }
        else
        {
            x = s[0];
        }
        if (x == '0')
        {
            q.push(name);
        }
        else if (x == '1' && !q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }
        else if (x == '1' && q.empty())
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}