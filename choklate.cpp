#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{

int n;
cin>>n;

ll a[n];
for(int i=0;i<n;i++)
cin>>a[i];

ll ans=a[n-1];
for(int i=n-2;i>=0;i--)
{
  ll t = min(a[i+1]-1,a[i]);
if(t<0) t=0;
a[i]=t;
ans+=t;

}

   

cout<<ans<<endl;
    return 0;
}