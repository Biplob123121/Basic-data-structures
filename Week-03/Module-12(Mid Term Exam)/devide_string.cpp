#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string first;
    string second;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }
    ss >> first;
    ss >> second;
    cout << first << endl;
    cout << second << endl;
    return 0;
}