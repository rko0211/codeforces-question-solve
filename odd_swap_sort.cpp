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
    vector<ll> odd(n), even(n);
    ll odd_val = LLONG_MAX;
    ll even_val = LLONG_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            even[i] = min(even_val, a[i]);
            if (even_val > a[i])
            {
                even_val = a[i];
            }
        }
        else
        {
            odd[i] = min(odd_val, a[i]);
            if (odd_val > a[i])
            {
                odd_val = a[i];
            }
        }
    }
    bool flag = false;
    for(int i=0;i<n;i++){
      if(a[i]%2==0){
        // the element is even
        if(a[i]>even[i]){
          flag = true;
          break;
        }
      }
      else{
          if(a[i]>odd[i]){
          flag = true;
          break;
        }
      }
    }
    if(!flag)
    cout<<"Yes\n";
    else cout<<"No\n";
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