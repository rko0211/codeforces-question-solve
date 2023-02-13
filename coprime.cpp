#include <bits/stdc++.h>
using namespace std;
bitset<10001>primes;
 vector<int>coprimes[1001];
void solve()
{
  
   for(int i=1;i<=1000;i++)
   {
    for(int j=1;j<=1000;j++)
    {
        if(__gcd(i,j)==1)
        {
            coprimes[i].push_back(j);
        }
    }
   }

   int n;
   cin>>n;
   vector<int>pcoprime[1001];
   for(int i=1;i<=n;i++)
   {
    int x;   cin>>x;
    pcoprime[x].push_back(i);
   }
   int ans=-1;
   for(int i=1;i<=1000;i++)
   {
     for(int j:coprimes[i])
     {
        if(!pcoprime[i].empty() && !pcoprime[j].empty())
        {
            ans = max(ans,pcoprime[i].back()+pcoprime[j].back());
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