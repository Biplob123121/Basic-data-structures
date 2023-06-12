#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r, sum = 0;
        cin >> l >> r;
        for (int i = l - 1; i <= r - 1; i++)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
    }
    return 0;
}