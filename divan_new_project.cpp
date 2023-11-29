#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans[n + 1] = {-1};
    ans[0] = 0;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({a[i], i});
    }
    sort(vp.begin(), vp.end());
    bool flag = false;
    int x = 1;
    int y = -1;
    for (int i = 0; i < vp.size(); i++)
    {

        if (flag == false)
        {
            ans[(vp[i].second + 1)] = x;
            x++;
            flag = true;
        }
        else
        {
            ans[(vp[i].second + 1)] = y;

            y--;
            flag = false;
        }
        n--;
    }

    for (int i = 0; i < (n + 1); i++)
    {
        cout << ans[i] << " ";
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