#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll w, h;
    cin >> w >> h;

    ll k1;
    cin >> k1;
    ll ao[k1];
    for (int i = 0; i < k1; i++)
        cin >> ao[i];
    ll k2;
    cin >> k2;
    ll ah[k2];
    for (int i = 0; i < k2; i++)
        cin >> ah[i];
    ll k3;
    cin >> k3;
    ll oa[k3];
    for (int i = 0; i < k3; i++)
        cin >> oa[i];
    ll k4;
    cin >> k4;
    ll wa[k4];
    for (int i = 0; i < k4; i++)
        cin >> wa[i];
    ll b1 = INT_MIN;
    ll b2 = INT_MIN;
    ll b3 = INT_MIN;
    ll b4 = INT_MIN;
    b1 = max(b1, (ao[k1 - 1] - ao[0]));     //ao -x
    b2 = max(b2, (ah[k2 - 1] - ah[0]));     //ah - x
    b3 = max(b3, (oa[k3 - 1] - oa[0]));     //oa -y
    b4 = max(b4, (wa[k4 - 1] - wa[0]));     //wa -y
    ll area1 = (b1*1LL*h);
    ll area2 = (b2*1LL*h);
    ll area3 = (b3*1LL*w);
    ll area4 = (b4*1LL*w);
    ll ans = max(ans,max(area1,max(area2,max(area3,area4))));
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