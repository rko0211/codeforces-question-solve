#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

 int t;
 cin>>t;
 while(t--)
 {
int n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++)
cin>>a[i];
ll ans =0;
int neg=0;
for(int i=0;i<n;i++)
{
    if(a[i]<0)
    neg++;
}
if(neg%2==0)
{
    for(int i=0;i<n;i++)
    {
        ans+=abs(a[i]);
    }
}
else{
    for(int i=0;i<n;i++)
    {
        a[i]=abs(a[i]);
    }
    sort(a,a+n);
    a[0]=-a[0];
    for(int i=0;i<n;i++)
    {
        ans+=a[i];
    }

}
cout<<ans<<endl;

 }

    return 0;
}