#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
   unordered_map<int, int> m;
   sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    if (n == 2)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        int sum;
        if (a[n - 1] == a[n - 2])
        {
             sum = m[a[n - 1]];
            if ((n - sum) >= (sum)-1)
            {
                cout << "YES\n";
                // return;
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
             sum = m[a[n - 1]] + m[a[n - 2]];
            if (n - sum >= 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
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