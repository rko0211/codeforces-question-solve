#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<ll> index[26]; // This is the array of vector
    vector<ll> ans;
    int move = 0;
    int k;
    for (int i = 0; i < n; i++)
    {
        index[s[i] - 'a'].push_back(i + 1);
    }
    int cost = abs(s[n - 1] - s[0]);
    if (s[n - 1] > s[0])
    {
        for (int i = s[0] - 'a'; i <= s[n - 1] - 'a'; i++)
        {

            k = index[i].size();
            move += k;
            for (int j = 0; j < k; j++)
            {
                ans.push_back(index[i][j]);
            }
        }
    }
    else
    {
        for (int i = s[0] - 'a'; i >= s[n - 1] - 'a'; i--)
        {
            k = index[i].size();
            move += k;
            for (int j = 0; j < k; j++)
            {
                ans.push_back(index[i][j]);
            }
        }
    }
    cout << cost << " " << move << endl;
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
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