#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (k <= 2)
    {
        cout << 0 << endl;
        return;
    }
    if (k == n)
    {
        int ans;
        for (int i = 0; i < n; i++)
        {
            int val = (i + i + 1);
            if ((n - 1 - val) < i)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
        return;
    }
    int ans;

    for (int i = 0; i <= n / 2; i++)
    {
        if (a[i] == a[n - 1 - i])
        {
            int j = n - 1 - i;
            if ((i + j) % 2 == 0)
            {
                int mid = (i + j) / 2;
                if ((mid - i - 1) == i)
                {
                    ans = i;
                    break;
                }
            }
            if((j-i-1)==i){
              ans =i;
              break;
            }
        }
        
        else
        {
            int val = (i + i + 1);
            if ((n - 1 - val) < i)
            {
                ans = i;
                break;
            }
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