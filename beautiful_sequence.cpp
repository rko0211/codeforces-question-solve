#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;  cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    // sort(a,a+n);
    for(int i=0;i<n;i++)
    {
    if((i+1)>=a[i])
    {
        cout<<"YES\n";
        return;
    }
    }
    cout<<"NO\n";
}
int main()
{

int t;  cin>>t;
while(t--)
{
    solve();
}
    return 0;
}