#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> um;
    for (int i = 0; i < s.size(); i++)
    {
        um[s[i]]++;
    }
    sort(s.begin(), s.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<um[s[i]]<<" ";
        if ((um[s[i]] )>= (int(s[i] - 'A') + 1))
        {
            ans++;
            um[s[i]] = 0;
        }
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