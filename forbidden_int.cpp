#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES\n";
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    if (k > 1)
    {
        if (k == 2)
        {
            if (n % 2 == 0)
            {
                cout << "YES\n";
                cout<<n/2<<endl;
                while (n>0)
                {
                    
                    n -= 2;
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO\n";
            }
            return;
        }
        else if (k > 2)
        {
            cout << "YES\n";
            if (n % 2 == 0)
            {
               cout<<n/2<<endl;
                while (n)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << endl;
            }
            else
            {
                cout<<(n-3)/2+1<<endl;
                cout << 3 << " ";
                n -= 3;
                while (n>0)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << endl;
            }
            return;
        }
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