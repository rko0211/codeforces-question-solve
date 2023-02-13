#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    string ans = "";
    for (int i = 1; i <= k; i++)
    {
        int length = n / k;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            if (length <= 0)
            {
                ans += ch;
                break;
            }
            length--;
            if (m[ch])
            {
                m[ch]--;
            }
            else
            {
                ans += ch;
                break;
            }
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