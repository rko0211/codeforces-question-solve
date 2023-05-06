#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, string>> v;
    int a;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> s;
        v.push_back({a, s});
    }

    int time = INT_MAX;
    int minval1 = INT_MAX;
    int minval2 = INT_MAX;
    for (auto &it : v)
    {
        if (it.second[0] == '1' && it.second[1] == '0')
        {
            minval1 = min(minval1, it.first);
        }
    }
    for (auto &it : v)
    {
        if (it.second[0] == '0' && it.second[1] == '1')
        {
            minval2 = min(minval2, it.first);
        }
    }
    int ans=INT_MAX;
    if (minval1 != INT_MAX && minval2 != INT_MAX)
        ans = (minval1 + minval2);


    for (auto &it : v)
    {
        if (it.second[0] == '1' && it.second[1] == '1')
        {
            ans = min(ans, it.first);
        }
    }
    if(ans==INT_MAX){
        cout<<-1<<endl;
        return;
    }
    cout << ans << endl;
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