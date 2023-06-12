#include <bits/stdc++.h>
using namespace std;
void func(int *&p)
{
    p = NULL;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    func(ptr);
    cout << ptr << endl;
    return 0;
}