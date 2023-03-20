#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
   int vis[26];
   for(int i=0;i<26;i++)
   {
    vis[i]=-1;
   }
   for(int i=0;i<n;i++)
   {
    int itm = (s[i]-'a');
    if(vis[itm]==-1)
    {
        vis[itm]=i%2;
    }
    else
    {
        // vis[itm]!=-1;
        if(vis[itm]!=i%2) { cout<<"NO\n"; return;};
    }
   }
   cout<<"YES\n";


}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}