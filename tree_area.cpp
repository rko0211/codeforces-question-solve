#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    double n, d, h;
    cin >> n >> d >> h;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double ans = 0;

    const double area = (d * h) / 2;

    for (int i = 0; i < n; i++)
    {
        ans += area;
        if (i < n - 1 && a[i + 1] <= (a[i] + h))
        {
            double rh = ((a[i] + h) - a[i + 1]);
            double rd = d * rh / h;

            ans -= (0.5* (rh * rd) );
        }
    }
    cout <<fixed<<setprecision(7)<<ans<< endl;
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
