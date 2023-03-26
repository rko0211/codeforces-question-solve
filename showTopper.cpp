#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int val1 = a[n - 1];
    int val2 = b[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (val1 >= a[i] && val2 >= b[i])
        {
            continue;
        }
        else
        {
            swap(a[i], b[i]);
        }
    }


    int max1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, a[i]);
    }
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max2 = max(max2, b[i]);
    }
    if ((max1 == val1) && (max2 == val2))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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
}