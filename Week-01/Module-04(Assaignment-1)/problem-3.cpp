#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}