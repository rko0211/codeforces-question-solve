#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
map<int,int>m;
for(int i=0;i<n;i++)
{
    m[a[i]]++;
}
int small_val=INT_MAX;
for(auto &it:m)
{
    small_val= min(small_val,it.second);
}
if(small_val==1)
{
    cout<<-1<<endl;
    return;
}
int x=1;
bool flag =true;
int ans[n];
bool flag1=true;
for(int i=0;i<n;i++)
{
    if(i>0 && a[i]!=a[i-1])
    {
        flag1=true; flag =true;
    }
    if(m[a[i]]%2==0 && flag==true)
    {
      ans[i]= (i+2);
      flag =false;
    }
    else if(m[a[i]]%2==0 && flag==false)
    {
      ans[i]=i;
      flag=true;
    }
    if(m[a[i]]%2==1 && flag1==true)
    {
        ans[i]=(m[a[i]]+i);
        flag1=false;
    }
    else if(m[a[i]]%2==1 && flag1==false)
    {
        ans[i]=i;
    }
}
for(int i=0;i<n;i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}