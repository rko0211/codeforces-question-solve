#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll x,y;
    cin>>x>>y;
 ll length = 2*(x-y);
 cout<<length<<endl;
 for(ll k=y+1;k<=x;k++) 
 cout<<k<<" ";
 for(ll p =x-1;p>=y;p--)
 cout<<p<<" ";
 cout<<endl;

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