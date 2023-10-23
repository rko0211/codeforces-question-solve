#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    int ans = INT_MAX;
    // ll value = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     value *= a[i];
    //     if (value % k == 0)
    //     {
    //         cout << 0 << endl;
    //         return;
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            ans = min(ans, (k - a[i]));
        }
        else
        {
            int val = a[i] / k;
            if (a[i] % k != 0)
            {
                val++;
            }
            ans = min(ans, (k * val - a[i]));
        }
    }
    
    if(k==4){
        int cnt =0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                cnt++;
            }

     
        }

        cnt = min(2,cnt);
        ans = min(ans,2-cnt);
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