#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cntB = 0;
    cntB = count(s.begin(), s.end(), 'B');
    if (cntB == k)
    {
        cout << 0 << endl;
        return;
    }
    else if (cntB > k)
    {
        int c = 0;
        int ind;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (c == k)
            {
                ind = i;
                break;
            }

            if (s[i] == 'B')
            {
                c++;
            }
        }
        cout << 1 << endl;
        cout << (ind+1) << " "
             << "A" << endl;
    }
    else
    {
        // cntB < k
        int req = (k - cntB);
        int ind;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                req--;
            }
            if (req == 0)
            {
                ind = i;
                break;
            }
        }
        cout << 1 << endl;
        cout << (ind + 1) << " "
             << "B" << endl;
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