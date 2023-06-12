#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (auto it = a.end() - 1; it >= a.begin(); it--)
    {
        cout << *it << " ";
    }
    return 0;
}