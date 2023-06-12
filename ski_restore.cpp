#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
   ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   ll conseq[n] = {0};
    int ind = 0;
    ll consecutive_count = 0;
    int count = 0;
    // Similar like kadan's algorithm
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= q)
        {
            count++;
        }
        else if (a[i] > q)
        {
            consecutive_count = count;
            count = 0;
            if (consecutive_count >= k)
            {
                conseq[ind] = consecutive_count;
                ind++;
            }
            consecutive_count = 0;
        }
    }
    consecutive_count = count;
    count = 0;
    if (consecutive_count >= k)
    {
        conseq[ind] = consecutive_count;
        ind++;
    }
    consecutive_count = 0;
  ll ans =0;
    

    for(int i=0;i<n;i++){
       if(conseq[i]!=0)
        ans+=(conseq[i]- (k-1));

     for(int j =k+1;j<=conseq[i];j++){
        ans+= (conseq[i]- (j-1));
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