#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{

int n,q;
cin>>n>>q;
ll a[n];
for(int i=0;i<n;i++)
cin>>a[i];

sort(a,a+n);
// By default aray values are 0
vector<ll>pref(n+1);

for(int i=0;i<n;i++)
{
    pref[i+1]=pref[i]+a[i];
}



while(q--)
{
    int x,y;
    cin>>x>>y;
    // x--;y--;
  cout<<pref[n-x+y]-pref[n-x]<<endl;
}
    return 0;
}