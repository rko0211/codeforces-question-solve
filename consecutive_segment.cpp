#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int len2 = 0;
    int len3 = 0;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[i - 1]) == 2)
        {
            len2++;
        }
        else if ((a[i] - a[i - 1]) == 3)
        {
            len3++;
        }
        else if((a[i] - a[i - 1]) >3)
        {
            cout<<"NO\n";
            return ;
        }
    }
    if(len3==1 && len2==0)
    {
        cout<<"YES\n";

    }
    else if(len2<=2 && len3==0)
    {
        cout<<"YES\n";
    }
    else 
    cout<<"NO\n";
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