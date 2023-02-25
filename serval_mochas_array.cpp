#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int gc=0;
 bool flag=false;
 for(int i=0;i<n;i++)
 {
    for(int j=i+1;j<n;j++)
    {
        if(__gcd(a[i],a[j])<=2)
        {
            flag=true;
            break;
        }
    }
 }
if(flag) cout<<"YES\n";
else cout<<"NO\n";
    
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