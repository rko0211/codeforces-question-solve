#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    int x = 1;
    bool flag = false;
    a.push_back(x);
    n -= x;
    x++;
    flag = true; // B is true

    while (n > 0)
    {
        if (flag)
        {
            // Bob
            int val = min(n, x);
            if (n < 0)
            {
                break;
            }
            b.push_back(val);
            n -= x;

            x++;
            if (n < 0)
            {
                break;
            }
            val = min(n, x);
            b.push_back(val);
            n -= x;
            x++;
            flag = false; // A is false
        }

        else
        {
            // Alice
            int val = min(n, x);
            if (n < 0)
            {
                break;
            }
            a.push_back(val);
            n -= x;
            x++;
            if (n < 0)
            {
                break;
            }
            val = min(n, x);
            a.push_back(val);
            n -= x;
            x++;
            flag = true;
        }
    }

    int b1 = 0;
    int w1 = 0;
    // cout<<"Alice Array\n";
    for (int i = 0; i < a.size(); i++)
    {
        // cout <<a[i] << " ";
        b1 += (a[i] / 2);
        w1 += (a[i] - (a[i]/2));
    }
    // cout<<endl;
    int w2 = 0;
    int b2 = 0;
    //  cout<<"Bob Array\n";
    for (int i = 0; i < b.size(); i++)
    {
        // cout << b[i] << " ";
        w2 += (b[i] / 2);
        b2 += (b[i] - (b[i]/2));
    }
    cout << w1 << " " << b1 << " " << w2 << " " << b2 << endl;
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