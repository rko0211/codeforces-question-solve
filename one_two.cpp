#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;  cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
int prefix[n]; int suffix[n];
int count=0;
for(int i=0;i<n;i++)
{
    if(a[i]==2)
    {
        count++;
    }
    prefix[i]=count;
}
int count1=0;
for(int i=n-1;i>=0;i--)
{
    if(a[i]==2)
    {
        count1++;
    }
    suffix[i]=count1;
}

int ans=-1;
for(int i=0;i<n-1;i++)
{
    if(prefix[i]==suffix[i+1])
    {
        ans=i+1;
        break;
    }
}
cout<<ans<<endl;
}
int main()
{

int t;  cin>>t;
while (t--)
{
    /* code */
    solve();
}


    return 0;
}