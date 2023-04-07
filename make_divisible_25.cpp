#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    ll ans = INT_MAX;
    ll len = 0;
    ll x = n;
    while (x > 0)
    {

        len++;
        x /= 10;
    }
    int arr[len];
    int i = 0;
    while (n > 0)
    {
        int rem = n % 10;
        arr[i] = rem;
        n /= 10;
        i++;
    }
    reverse(arr, arr + len);
    // map<int,int>m;
    for (int i = 0; i < len; i++)
    {
        // int fnum = arr[i];
        // 50
        if (arr[i] == 5)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (arr[j] == 0)
                {
                    ans = min(ans, (j - i - 1) + (len - j - 1));
                }
            }
        }
// 75
        else if (arr[i] == 7)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (arr[j] == 5)
                {
                    ans = min(ans, (j - i - 1) + (len - j - 1));
                }
            }
        }
        // 25
        else if (arr[i] == 2)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (arr[j] == 5)
                {
                    ans = min(ans, (j - i - 1) + (len - j - 1));
                }
            }
        }
        // 00
         else if (arr[i] == 0)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (arr[j] == 0)
                {
                    ans = min(ans, (j - i - 1) + (len - j - 1));
                }
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