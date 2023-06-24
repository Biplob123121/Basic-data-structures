#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // cout << myList.size();
    // cout << myList.max_size();

    // myList.clear();

    myList.resize(2);
    myList.resize(5, 100);

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}