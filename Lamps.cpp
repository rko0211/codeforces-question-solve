#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    return p2.second <= p1.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<int>v1;
    vector<ll>v2;
    for (int i = 0; i < n; i++)
    {
        int x1; ll x2;
        cin >> x1 >> x2;
        v1.push_back(x1);
        v2.push_back(x2);
    }
    // sort(vp.begin(), vp.end(), cmp);
    // for(auto &it:vp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // cout<<endl;

    unordered_map<ll, vector<ll>> ump;
    for (int i=0;i<n;i++)
    {
       ump[v1[i]].push_back(v2[i]);
    }
    for(auto &it:ump){
        sort(it.second.begin(),it.second.end(),greater<int>());
    }


      ll ans =0;
      for(auto &it:ump){
        int pick =0;
        for(auto &itr:it.second){
            if(pick==it.first) break;
            ans+= itr;
            pick++;
        }
      }

  cout<<ans<<endl;
  
  
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}