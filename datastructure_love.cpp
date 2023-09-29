#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n+1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll pref[n+1];
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = (pref[i - 1] ^ a[i]);
    }
    string s;
    cin >> s;
    ll zxor = 0, oxor = 0;
     s = '#'+s;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '1')
        {
            oxor ^= a[i];
        }
        else
        {
            zxor ^= a[i];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int tp;
        cin >> tp;
        if (tp == 1)
        {
            int l, r;
            cin >> l >> r;
         
            zxor ^= (pref[r] ^ pref[l-1]);
            oxor ^= (pref[r] ^ pref[l-1]);
        }
        else
        {
            int g;
            cin >> g;
            // cout<<s<<endl;
            if (g == 1)
            {
                cout << oxor << " ";
            }
            else
            {
                cout << zxor << " ";
            }
        }
    }
    cout << endl;
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