#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n); // in binary search array must be sorted
    int x;
    cin >> x;
    int l = 0;
    int r = n - 1;
    int flag = 0;
    while (l <= r)
    {
        int mid_index = (l + r) / 2;
        if (ar[mid_index] == x)
        {
            flag = 1;
            break;
        }
        if (x > ar[mid_index])
        {
            l = mid_index + 1;
        }
        else
        {
            r = mid_index - 1;
        }
    }
    if (flag == 1)
        cout << "found" << endl;
    else
        cout << "not found" << endl;
    return 0;
}