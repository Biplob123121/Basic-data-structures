#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n);
    vector<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        it = find(a.begin(), a.end(), a[i] + 1);
        if (it != a.end())
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}