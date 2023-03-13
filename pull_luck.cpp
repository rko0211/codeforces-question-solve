#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    ll n,x,p;
    cin>>n>>x>>p;
    //  x --> x-->n steps
  ll req = (n-x)%n;
  bool ok =false;
  for(int i=1;i<=min(p,2*1LL*n);i++)
  {
    ll force = (i*1LL*(i+1LL))/2LL;
    int rem = force%n;
    if(rem==req)
    {
      ok=true;
      break;
    }
  }
if(ok) cout<<"Yes\n";
else cout<<"No\n";

}
int main()
{

int t;
cin>>t;
while(t--)
{
    solve();
}
    return 0;
}