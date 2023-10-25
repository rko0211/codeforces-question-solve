#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    bool even = false;
    bool odd = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = true;
        }
        else
        {
            odd = true;
        }
        sum += a[i];
    }
    int avg = sum / n;
    if ((even && odd))
    {
        cout << "No\n";
        return;
    }

    if (odd == true)
    {
        if (sum % n == 0)
        {
            if (avg % 2 == 0)
            {
                cout << "No\n";
                return;
            }
            else
            {
                cout << "Yes\n";
                return;
            }
        }
        else
        {
            cout << "No\n";
            return;
        }
    }
    else if (even == true)
    {
        if (sum % n == 0)
        {
            if (avg % 2 == 1)
            {
                cout << "No\n";
                return;
            }
            else
            {
                cout << "Yes\n";
                return;
            }
        }
        else
        {
            cout << "No\n";
            return;
        }
    }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
