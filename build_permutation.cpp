#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        long long sr = sqrt(x);

        // if product of square root
        // is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
void solve()
{
    int n;
    cin >> n;
    int ans[n];
    int k = n - 1;
    int j = n - 1;
    while (k >= 0)
    {
        int i = 0;
        for (i = 0; i <= j; i++)
        {
            if (isPerfectSquare(j + i))
            {
                break;
            }
        }
        for (int p = i; p <= j; p++)
        {
            ans[k--] = p;
        }
        j = i - 1;
    }
    for (int i = 0; i <n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    // time complexity = O(n)
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