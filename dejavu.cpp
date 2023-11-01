#include <bits/stdc++.h>
using namespace std;
#define ll long long int
static bool cmp(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    return p1.second < p2.second;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int>x;
    for (int i = 0; i < q; i++)
      {
        int ele ; cin>>ele;
        if(x.size()==0 || x.back()>ele){
            x.push_back(ele);
        }
      }
    // ll add[q];
    // ll divisible[q];
    // for (int i = 0; i < q; i++)
    // {
    //     add[i] = pow(2, (x[i] - 1));
    //     divisible[i] = (add[i] * 2);
    // }

    // unordered_map<ll, vector<ll>> um;

    // ll maxele = LLONG_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     um[a[i]].push_back(i);
    //     maxele = max(maxele, a[i]);
    // }

    // for (int i = 0; i < q; i++)
    // {
    //     ll val = LLONG_MIN;
    //     for (ll j = divisible[i]; j <= maxele; j += divisible[i])
    //     {
    //         if (um[j].size() > 0)
    //         {
    //             for (auto &it : um[j])
    //             {
    //                 um[(j + add[i])].push_back(it);
    //             }
    //             um[j].clear();
    //             um.erase(j);
    //             val = max(val, (j + add[i]));
    //         }
    //     }
    //     maxele = max(maxele, val);
    // }

    // vector<pair<ll, ll>> vp;
    // for (auto &it : um)
    // {
    //     if (it.second.size() > 0)
    //     {
    //         for (auto &itr : it.second)
    //         {
    //             vp.push_back({it.first, itr});
    //         }
    //         it.second.clear();
    //     }
    // }
    // um.clear();

    // sort(vp.begin(), vp.end(), cmp);

    // for (auto &it : vp)
    // {
    //     cout << it.first << " ";
    // }
    // cout << endl;


    for(auto &it:x){
        
            ll val = pow(2,it);
            for(int j=0;j<n;j++){
                
                if(a[j]%val==0){
                    a[j]+=(val/2);
                }
            }
         
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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