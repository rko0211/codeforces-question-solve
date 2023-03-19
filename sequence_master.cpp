#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int m;
    cin >> m;
    int n = 2 * m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i]-0);
    }
    
    if (n == 2)
    {  ll temp = 0;
        temp += abs(a[1] - a[0]);
        ans = min(ans, temp);
    }
    if (n == 4)
    {
         ll temp = 0;
        for (int i = 0; i < 4; i++)
            temp += abs(a[i] - 2);
        ans = min(ans, temp);
    }
    if (n % 4 == 0)
    { ll temp = 0;
    for(int i=0;i<n;i++)
    {
        temp+=abs(a[i]-(-1));
    }
        for(int i=0;i<n;i++)
        {
            temp-= abs(a[i]-(-1));
            temp+= abs(a[i]-n/2);
            ans = min(ans,temp);
            temp-=abs(a[i]-n/2);
            temp+= abs(a[i]-(-1));
        }
    }
    cout<<ans<<endl;
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