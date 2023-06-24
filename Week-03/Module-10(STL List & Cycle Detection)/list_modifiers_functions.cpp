#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    list<int> myList2 = {100, 200, 300};
    vector<int> v = {100, 200, 300};
    list<int> newList;
    newList = myList;
    //  newList.assign(myList.begin(), myList.end());

    // newList.push_back(100);
    // newList.push_front(100);
    // newList.pop_back();
    // newList.pop_front();

    // newList.insert(next(newList.begin(), 2), 100);
    // newList.insert(next(newList.begin(), 2), myList2.begin(), myList2.end());
    // newList.insert(next(newList.begin(), 2), {100, 200});
    // newList.insert(next(newList.begin(), 2), v.begin(), v.end());

    // newList.erase(next(newList.begin(), 2));

    // replace(newList.begin(), newList.end(), 40, 500);

    // for (int val : newList)
    // {
    //     cout << val << " ";
    // }

    auto it = find(newList.begin(), newList.end(), 40);
    if (it == newList.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}