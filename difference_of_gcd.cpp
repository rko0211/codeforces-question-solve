#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
int n;
ll l,r;
cin>>n>>l>>r;

vector<ll>ans;
ans.push_back(l);
int c=1;
for(int i=2;i<=n;i++)
{
  if(l%i==0)
{
ans.push_back(l);
c++;
}
else
{
 ll j = l/i;
 j = (j+1)*i;
 if(j>=l && j<=r)
 {
    ans.push_back(j);
    c++;
 }
 else break;
}
}
if(c==n)
{
    cout<<"YES"<<endl;
    for(auto &it:ans)
    {
        cout<<it<<" ";
    }
    
}
else
{
    cout<<"NO";
}

cout<<endl;
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