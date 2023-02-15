#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++)
   { cin>>a[i];
     sum+=a[i];
   }
 if(n%2==0)
 {
    ll mini = 1e10+1;
   int ind=0;
   for(int i=0;i<n;i++)
   {
    mini = min(mini,a[i]);
   }
   for(int i=0;i<n;i++)
   {
    if(mini==a[i])
    {
        ind=i;
        break;
    }
   }
   if(n==1) cout<<"Mike\n";
   else if(ind%2==1) cout<<"Mike\n";
   else  cout<<"Joe\n";
 }
 else{
  cout<<"Mike\n";
 }
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