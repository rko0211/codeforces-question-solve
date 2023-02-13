#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
ll a,b,n,m;
cin>>a>>b;
cin>>n>>m;
ll ans =0;
ans = a*(n/(m+1))*m;
ans+=min(n%(m+1)*a,n%(m+1)*b);
ans = min(ans,(b*n));
cout<<ans<<endl;

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