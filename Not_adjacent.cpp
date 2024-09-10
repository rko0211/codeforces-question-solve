#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n][n];
    int x=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = x++;
        }
    }
    for (int i = 1; i < n; i += 2)
    {
        for (int j = 0; j < n - 1; j++)
        {
            swap(a[j][i], a[j + 1][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i-1)>=0 && abs(a[i][j] - a[i - 1][j])==1)
            {
                cout << -1 << endl;
                return;
            }
              if ((i+1)<n && abs(a[i][j] - a[i + 1][j])==1)
            {
                cout << -1 << endl;
                return;
            }
              if ((j-1)>=0 && abs(a[i][j] - a[i][j-1])==1)
            {
                cout << -1 << endl;
                return;
            }
              if ((j+1)<n && abs(a[i][j] - a[i][j+1])==1)
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }

    return 0;
}