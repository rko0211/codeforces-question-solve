#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;  cin>>n;
    int c[n];
for(int i=0;i<n;i++)cin>>c[i];
sort(c,c+n);
if(c[0]!=1)
{
    cout<<"NO\n";
    return ;
}
vector<int>dp(50005,0);
dp[1]=1;
for(int i=1;i<n;i++)
{
    if(!dp[c[i]])
    {
        cout<<"NO\n";
        return;
    }
    for(int j=5000;j>=c[i];j--)
    {
       dp[j] = (dp[j]|dp[j-c[i]]);
    }
}
cout<<"YES\n";

}
int main()
{

int t;
cin>>t;
while(t--)
solve();

    return 0;
}