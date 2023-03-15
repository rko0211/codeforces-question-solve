#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isAp(ll a, ll b, ll c)
{
    if((b-a)==(c-b)) return true;
    return false;
} 
void solve()
{
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    // multiply with first element;
 
        ll firstMultiple = ((2*1LL*a[1]-a[2])/a[0]);
        
        if(firstMultiple>0)
        {
            ll x = a[0]*1LL*firstMultiple;
            if(isAp(x,a[1],a[2]))
            {
                cout<<"YES\n";
                return;
            }

        }
        ll secondMultiple = ((a[2]+a[0])/(2*a[1]));
        if(secondMultiple>0)
        {
            ll y = a[1]*1LL*secondMultiple;
            if(isAp(a[0],y,a[2]))
            {
                cout<<"YES\n";
                return;
            }
        }
        ll thirdMultiple = (2*1LL*a[1]-a[0])/a[2];
        if(thirdMultiple>0)
        {
            ll z = a[2]*1LL*thirdMultiple;
            if(isAp(a[0],a[1],z))
            {
                cout<<"YES\n";
                return ;
            }
        }
 
    cout<<"NO\n";
    return ;
}
int main()
{

int t;  cin>>t;
while(t--)
{
    solve();
}

    return 0;
}