#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{

ll n,m;
cin>>n>>m;
ll a[n];
for(int i=1;i<=n;i++)
cin>>a[i];

ll pref[n+4];
pref[1]=0;
for(int i=2;i<=n;i++)
{
    if(a[i]<a[i-1])
    {
        pref[i]= pref[i-1]+(a[i-1]-a[i]);
    }
    else pref[i]=pref[i-1];
}

ll suf[n+4];
suf[n]=0;

for(int i=n-1;i>0;i--)
{
    if(a[i]<a[i+1])
    {
        suf[i]= suf[i+1]+(a[i+1]-a[i]);
    }
    else
    suf[i]=suf[i+1];
}
 
while(m--)
{
    int l,r;
    cin>>l>>r;
   
    if(l<r)
    {
        cout<<pref[r]-pref[l]<<endl;
    }
    else 
    {
        cout<<suf[r]-suf[l]<<endl;
    }
}

    return 0;
}