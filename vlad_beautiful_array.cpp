#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
   
    if((odd==0&&even !=0) || (odd!=0 && even==0)){
        cout<<"YES\n";
        return ;
    }
    int minodd = INT_MAX;
    int mineven = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            mineven = min(mineven, a[i]);
        }
        else
        {
            minodd = min(minodd, a[i]);
        }
    }
   
       if(minodd<mineven){
            cout<<"YES\n";
       }
       else{
        cout<<"NO\n";
       }
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