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
sort(a,a+n);
reverse(a,a+n);
map<int,int>m;
for(int i=0;i<n;i++)
{

 m[a[i]]++;
}
int flag=1;
for(auto&it:m)
{
  if(it.second%2==1)
  {
    flag=0;
    break;
  }
}
if(flag)cout<<"Zenyk"<<endl; 
else  cout<<"Marichka"<<endl;
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