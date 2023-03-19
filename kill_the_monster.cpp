#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPosible(ll hc, ll dc, ll hm, ll dm, ll w, ll l)
{
   hc += l;
   dc += w;
   ll val1 = hc/dm;
   if(hc%dm!=0)
   {
      val1++;
   }
   ll val2 = hm/dc;
   if(hm%dc!=0)
   {
      val2++;
   }
   if(val1>=val2)
   {
      return true;
   }
   return false;
}
void solve()
{
   ll hc, dc;
   cin >> hc >> dc;
   ll hm, dm;
   cin >> hm >> dm;
   ll k, w, l;
   cin >> k >> w >> l;
   for (ll i = 0; i <= k; i++)
   {
      if (isPosible(hc, dc, hm, dm, i*1LL*w, (k - i)*1LL*l))
      {
         cout<<"YES\n";
         return ;
      }
   }
   cout<<"NO\n";
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