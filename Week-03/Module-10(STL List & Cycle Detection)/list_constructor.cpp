#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    // list<int> myList(10);
    // list<int> myList(10, 5);
    // cout << myList.size();
    // cout << myList.front();

    // copy from list
    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> myList(list2);

    // copy from array or vector
    // int ar[5] = {10, 20, 30, 40, 50};
    // list<int> myList(ar, ar + 5);
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> myList(v.begin(), v.end());

    // list<int>::iterator it;

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}