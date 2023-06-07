#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            if ((v[i + 1] % v[i]) == 0)
            {
                v[i + 1] = v[i];
            }
            else
            {
                v[i + 1] -= (v[i + 1] / v[i]) * (v[i]);
            }
        }

        if (v[i + 1] < v[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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