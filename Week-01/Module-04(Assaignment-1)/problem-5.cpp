#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n / 2 && j == n / 2)
            {
                cout << "X";
            }
            else if (i == s && j == s)
            {
                cout << "\\";
            }
            else if (j == r)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        s++;
        r--;
        cout << endl;
    }
    return 0;
}