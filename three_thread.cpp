#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mini = min({a, b, c});
    int cnt = 0;
    if (a != mini)
    {
        while (a != mini)
        {
            if (a < 0)
            {
                cout << "NO\n";
                return;
            }
            a -= mini;
            cnt++;
        }
    }
    if (b != mini)
    {
        while (b != mini)
        {
            if (b < 0)
            {
                cout << "NO\n";
                return;
            }
            b -= mini;
            cnt++;
        }
    }

    if (c != mini)
    {
        while (c != mini)
        {
            if (c < 0)
            {
                cout << "NO\n";
                return;
            }
            c -= mini;
            cnt++;
        }
    }
    // cout<<cnt<<endl;
    if (cnt <= 3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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