#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp[i] = (i+1);
    }
   
    int l = 0, r = n - 1;
    int l1 = 0, r1 = n - 1;
    int ind1 = -1, ind2 = -1;
    while (l < r)
    {
        if (a[l] == temp[l1] || a[l] == temp[r1])
        {
            if (l1 < r1)
            {

                if (a[l] == temp[l1])
                {
                    l1++;
                }
                else
                {
                    r1--;
                }
            }
            l++;
        }
        if (a[r] == temp[l1] || a[r] == temp[r1])
        {
            if (l1 < r1)
            {

                if (a[r] == temp[l1])
                {
                    l1++;
                }
                else
                {
                    r1--;
                }
            }

            r--;
        }
        else if ((a[l] != temp[l1] && a[l] != temp[r1]) && (a[r] != temp[l1] && a[r] != temp[r1]))
        {
            ind1 = l;
            ind2 = r;
            break;
        }
    }

    if (ind1 == -1 || ind2 == -1)
    {
        cout << -1 << endl;
        return;
    }
    cout << (ind1 + 1) << " " << (ind2 + 1) << endl;
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