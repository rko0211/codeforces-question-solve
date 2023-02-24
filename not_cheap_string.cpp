#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin >> s;
    ll p;
    cin >> p;
    ll score = 0;
    map<int, vector<int>> mp;
    for (int i = 0; i < s.size(); i++)
    {
        score += s[i] - 'a' + 1;
        mp[s[i] - 'a' + 1].push_back(i);
    }
    while (score > p)
    {
        for (int i = 26; i >= 0; i--)
        {
            for (auto it : mp[i])
            {
                score -= i;
                s[it] = '.';
                if (score <= p)
                    break;
            }
            if (score <= p)
            {
                break;
            }
        }
    }
    string ans = "";
    for (auto it : s)
    {
        if (it != '.')
        {
            ans += it;
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