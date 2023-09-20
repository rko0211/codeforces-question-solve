#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    ll xor_val = 0;
    ll or_val = 0;
 ll xr = 0;
    // ll xor_val=0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        or_val |= b[i];
    }
   
    for (int i = 0; i < n; i++)
    {
        xor_val ^= a[i];
        xr ^= (a[i] | or_val);
    }

    if (n % 2 == 0)
    {
        cout << xr << " " << xor_val << endl;
    }
    else
    {
        cout << xor_val << " " << xr << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        /* code */
    }

    return 0;
}