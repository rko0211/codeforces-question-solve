#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
          if(isPowerOfTwo((i+1))){
            // flag = true;
          }
          else{
            // flag = false;
            cout<<"NO\n";
            return;
          }
        }
    }
    cout<<"YES\n";
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