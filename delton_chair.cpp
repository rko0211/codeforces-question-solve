#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        if (p[i] == (i + 1))
        {
            cnt++;
        }
    }
    
    cout << (cnt/2+cnt%2 )<< endl;
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