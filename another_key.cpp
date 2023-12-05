#include <bits/stdc++.h>
using namespace std;
void solve()
{

    string s;
    cin >> s;
    char sb = '#';
    char BB = '#';
    int smb = 0;
    int lb = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            sb = 'b';
            smb++;
        }
        else if (s[i] == 'B')
        {
            BB = 'B';
            lb++;
        }
        else
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (sb == 'b' || smb>0)
                {
                    s[i] = '@';
                    sb = '#';
                    smb--;
                }
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                if (BB == 'B' || lb>0)
                {
                    s[i] = '@';
                    BB = '#';
                    lb--;
                }
            }
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' && smb > 0)
        {
            s[i] = '@';
            smb--;
        }
       else if (s[i] >= 'A' && s[i] <= 'Z' && lb > 0)
        {
            s[i] = '@';
            lb--;
        }
    }
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b' || s[i] == 'B')
            continue;
        if (s[i] != '@')
        {
            ans += s[i];
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