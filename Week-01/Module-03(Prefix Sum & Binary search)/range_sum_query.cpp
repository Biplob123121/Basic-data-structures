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
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        for (int i = l - 1; i < r; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}

// Time limit exceeded