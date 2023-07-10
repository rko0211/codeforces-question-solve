#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ans[n];
    bool track[n];
    for (int i = 0; i < n; i++)
    {
        track[i] = 0;
    }
    int d = 2;
    int k = 0;

    int x = n;

    for (int i = 0; i < x; i++)
    {
       
        if (track[i] == 0)
        {
            ans[k++] = i + 1;
            track[i] = 1;
          
            while ((ans[k - 1] * d) <= n && track[(ans[k - 1] * d) - 1] == 0)
            {
                int ind = (ans[k - 1] * d) - 1;
                track[ind] = 1;
               
                ans[k++] = (ans[k - 1] * d);
                
            }
        }
       
    }
    cout << d << endl;
 
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
    }

    return 0;
}