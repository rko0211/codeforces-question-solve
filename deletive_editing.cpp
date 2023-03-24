#include <bits/stdc++.h>
using namespace std;
void solve()
{

    string s, t, S;

    cin >> s >> t;
    vector<char> cnts(26, 0);
    vector<char> cntt(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        cnts[s[i] - 'A']++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        cntt[t[i] - 'A']++;
    }
    S = "";
    for (char c : s)
    {
        if (cnts[c - 'A'] > cntt[c - 'A'])
            cnts[c - 'A']--;
        else
            S.push_back(c);
    }
    if (S == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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