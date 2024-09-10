#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    int zero = 0, one = 0, two = 0;
    int a[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] % 3 == 0)
        {
            a[0]++;
        }
        else if (ar[i] % 3 == 1)
        {
            a[1]++;
        }
        else
        {
            a[2]++;
        }
    }
    if (a[1] == a[2] && a[2] == a[0])
    {
        cout << 0 << endl;
        return;
    }
    int avg = (a[2] + a[1] + a[0]) / 3;
    int ans = 0;
    while (*min_element(a, a + 3) != n / 3)
    {
        for (int i = 0; i < 3; i++)
        {
            if (a[i] > avg)
            {
                a[i] -= 1;
                a[(i + 1) % 3]++;
                ans++;
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
