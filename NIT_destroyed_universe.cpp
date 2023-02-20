#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
 
    int zero_count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zero_count++;
           
        }
    }
    int ans;
 if(zero_count==n)
 {
  ans =0;
 }
 else if(zero_count==0)
 {
    ans=1;
 }
 else 
 {
  int fnonzero_ind;
  for(int i=0;i<n;i++)
  {
    if(a[i]!=0)
    {
        fnonzero_ind=i;
        break;
    }
  }
  int lnonzero_ind;
  for(int i=n-1;i>=0;i--)
  {
    if(a[i]!=0)
    {
        lnonzero_ind=i;
        break;
    }
  }
  bool flag = true;
  for(int i = fnonzero_ind+1;i<lnonzero_ind;i++)
  {
    if(a[i]==0)
    {
        flag =false;
        break;
    }
  }
  if(flag) ans=1;
  else ans=2;
 }
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