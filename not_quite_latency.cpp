#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char c[3][3];
    int row;
    int col;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == '?')
            {
                row = i;
                col = j;
            }
        }
    }
    // cout<<row<<" "<<col<<endl;
    bool t1[3] = {false};
    bool t2[3] = {false};

    for (int i = 0; i < 3; i++)
    {
        if (c[row][i] != '?')
        {
            t2[c[row][i] - 'A'] = true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (c[i][col] != '?')
        {
            t1[c[i][col] - 'A'] = true;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (t1[i] == false && t2[i] == false)
        {
            cout << char('A' + i) << endl;
            return;
        }
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