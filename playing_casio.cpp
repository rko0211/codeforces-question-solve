#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;  cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    long long ans =0;
    for(int k=0;k<n;k++)
    {
        long long sum=0;
        for(int i=k+1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 sum+=abs(a[k][j]-a[i][j]);
            }
        }
        ans+=sum;
    }
    cout<<ans<<endl;
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