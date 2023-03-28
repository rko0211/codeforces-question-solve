#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    priority_queue<ll> pq;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (pq.empty()==false)
            {
            ans = (ans+ pq.top());
            pq.pop();
            }
        }
        else
        {
            pq.push(a[i]);
        }
    }
    cout << ans << endl;
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