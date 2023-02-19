#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
   long long int type1_count = 0;
   if (a[0] > 1)
    {
        int dif = (a[0] - 1);
        a[0] = (a[0] - dif);
        type1_count += dif;
    }
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[i - 1]) > 1)
        {
            int dif = a[i] - a[i - 1] - 1;
            a[i] = (a[i] - dif);
            type1_count += dif;
        }
    }
 
    
  
    cout << type1_count << endl;
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