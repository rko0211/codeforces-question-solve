#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int q;
    cin >> q;
    string ans = "";
    int a[q];

    int cnt = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> a[i];
    }

    if (q == 1)
    {
        cout << "1" << endl;
        return;
    }

    ans += '1';
    vector<int> track;
    bool broken = false;

    track.push_back(a[0]);
    for (int i = 1; i < q; i++)
    {
        //   Not broken case

        if (!broken)
        {
            if (a[i] >= track.back())
            {
                track.push_back(a[i]);
                ans += '1';
            }
            else
            {
                // ai < track.back()
                if (track[0] >= a[i])
                {
                    track.push_back(a[i]);
                    broken = true;
                    ans += '1';
                }
                else
                {

                    ans += '0';
                }
            }
        }

        else
        {
            if (a[i] < track.back())
            {
                ans += '0';
            }
            else
            {
                if (a[i] > track[0])
                {

                    ans += '0';
                }
                else
                {
                    ans += '1';
                    track.push_back(a[i]);
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