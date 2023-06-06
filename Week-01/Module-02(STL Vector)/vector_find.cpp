#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 2, 3, 2};
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 100);
    // cout << *it << endl;
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}