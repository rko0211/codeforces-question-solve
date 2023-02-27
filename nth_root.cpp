#include <bits/stdc++.h>
using namespace std;
#define eps 1e-7
// We want to get accurate answer till 6 decimal place
double multiply(double mid, int x)
{
    double ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans *= mid;
    }
    return ans;
}
int main()
{
    double n;
    int x;
    cin >> n;
    cin >> x;
    double lo = 1;
    double hi = n, mid;
    while (hi - lo > eps)
    {
        mid = (lo + hi) / 2;
        if (multiply(mid, x) < n)
        {
            lo = mid;
        }
        else
            hi = mid;
    }
    cout << setprecision(10) << lo << endl;
    cout << pow(n, 1.0 / x) << endl;

    return 0;
}