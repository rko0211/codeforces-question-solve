#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m;
    cin >> m;
    map<int, int> last;

    for (int i = 1; i <= m; i++)
    {
        int n;
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            last[x] = i;
        }
    }

    vector<int> ans(m + 1, -1);
    for (auto it : last)
    {
        if (ans[it.second] == -1)
        {
            ans[it.second] = it.first;
        }
    }
    bool flag = true;
    for (int i = 1; i <=m; i++)
    {
        if (ans[i] == -1)
        {
            flag = false;
            break;
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (int i = 1; i <=m; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
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