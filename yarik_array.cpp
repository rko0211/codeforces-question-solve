#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MIN;
    int cnt = a[0];
ans = max(ans,cnt);
if(cnt<0){
    cnt =0;
}
    for (int i = 1; i < n; i++)
    {
        if(i>0)
        if (((abs(a[i - 1]) % 2) == (abs(a[i]) % 2)))
        {
            cnt =0;
            cnt = a[i];
            // if (ans < cnt)
            // {
            //     ans = cnt;
            // }
            ans = max(ans, cnt);
            if (cnt < 0)
            {
                cnt = 0;
            }
        }
        else
        {

            cnt += a[i];
            // if (ans < cnt)
            // {
            //     ans = cnt;
            // }
            ans = max(ans,cnt);
            if (cnt < 0)
            {
                cnt = 0;
            }
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