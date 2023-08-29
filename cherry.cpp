#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll maxval = LLONG_MIN;
    ll ans = LLONG_MIN;
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
      
            maxval = a[i];
            ll val1=0,val2=0;
            if((i-1)>=0){
             val1 = a[i-1];
            }
            if((i+1)<n){
                val2 = a[i+1];
            }
            ans = max(ans,maxval*max(val1,val2));
     
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