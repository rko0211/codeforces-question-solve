#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
// fixed size sliding window technique
int i=0; int j=k-1;
vector<int>pref(n+1,0);

for(int i=1;i<=n;i++)
{
    pref[i] = pref[i-1]+ int(s[i-1]=='W'); 
}
int ans=INT_MAX;
for(int i=k;i<=n;i++)
{
    ans = min(ans,(pref[i]-pref[i-k]));
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