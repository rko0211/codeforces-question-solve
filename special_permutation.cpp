#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
if(n==2)
{
    cout<<a<<" "<<b<<endl;
    return;
}
int ls[n];
int j=1;
for(int i=n;i>=1;i--)
{
    if(i==a || i==b)
    {
        continue;
    }
  ls[j]=i;
  j++;
}
ls[0]=a;
ls[n-1]=b;

int minval =ls[0];
bool ok=false;
for(int i=0;i<n/2;i++)
{
    if(minval<=ls[i])
    {
      ok=true;
    }
    else
    {
        ok=false;
        break;
    }
}
bool ok1=false;
int maxval = ls[n-1];
for(int i=n/2;i<n;i++)
{
    if(maxval>=ls[i])
    {
      ok1=true;
    }
    else
    {
        ok1=false;
        break;
    }
}
if(ok&&ok1)
{
    for(int i=0;i<n;i++)
    {
     cout<<ls[i]<<" ";
    }
    cout<<endl;
}
else
{
    cout<<"-1"<<endl;
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