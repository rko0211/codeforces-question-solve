#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    bool flag = false;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << 0 << endl;
        return;
    }
    int neg = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }

    if (neg == 0)
    {
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
        return;
    }
    if (neg % 2 == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (neg %2 == 0)
    {
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
        return;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}