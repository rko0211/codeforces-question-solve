#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m;
    cin>>n>>m;
    // int k = 1e6+1;
    // int a[k];
    vector<int>a(1e6+1,0);
  
    int ans=0;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x]+=y;
        ans+=a[x];
        cout<<ans<<endl;
    }

}
int32_t main()
{

int t;
cin>>t;
while(t--)
solve();
    return 0;
}