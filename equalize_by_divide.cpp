#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (count(a, a + n, 1) >= 1 && count(a, a + n, 1) < n)
    {
        cout << -1 << endl;
        return;
    }
    
    vector<pair<ll, int>> res;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        res.push_back({a[i], i});
    }
    sort(res.begin(), res.end());
    while (res[0].first != res[n - 1].first)
    {
        int val = (res[0].first);
        for(int i=1;i<n;i++){
            if(val==res[i].first) continue;
            res[i].first = (res[i].first+ val-1)/val;
            ans.push_back({res[i].second,res[0].second});
        }
        sort(res.begin(),res.end());
    }
    cout<<ans.size()<<endl;
    for(auto &it:ans){
        cout<<it.first+1<<" "<<it.second+1<<endl;
    }

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