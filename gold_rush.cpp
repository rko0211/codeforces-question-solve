#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 unordered_map<int, bool> mp;
 bool isvalid(ll n, ll m){
        if (n == m)
    {
  return true;
    }
    if (m > n || n % 3 != 0)
    {
        return false;
        
    }
   return( isvalid(n/3,m) || isvalid(n-n/3,m));
 }
void solve()
{
    ll n, m;
    cin >> n >> m;
  if(isvalid(n,m)){
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

