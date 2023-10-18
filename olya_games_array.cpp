#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    vector<vector<ll>> mat;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<ll> v(m);
        for (int j = 0; j < m; j++)
        {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        mat.push_back(v);
    }

    int rowno = -1;
    ll mini = LLONG_MAX;
    ll fmini = LLONG_MAX;
    int frowno = -1;
    for (int i = 0; i < mat.size(); i++)
    {
        if (mat[i][0] < fmini)
        {
            fmini = mat[i][0];
            frowno = i;
        }

        if (mat[i][1] < mini)
        {
            mini = mat[i][1];
            rowno = i;
        }
        if (mini == mat[i][1])
        {
            if (rowno != -1 && mat[rowno][0] > mat[i][0])
            {
                rowno = i;
            }
        }

        if (fmini == mat[i][0])
        {
            if (frowno != -1 && mat[frowno][1] > mat[i][1])
            {
                frowno = i;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        if (i == rowno)
        {
            ans += fmini;
            continue;
        }
        ans += mat[i][1];
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