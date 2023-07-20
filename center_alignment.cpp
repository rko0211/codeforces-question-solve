#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> vs;
    string s;
    while (getline(cin, s))
    {
        vs.push_back(s);
    }
    // for(int i=0;i<vs.size();i++){
    //     cout<<vs[i]<<endl;
    // }
    int maxlen = INT_MIN;
    for (int i = 0; i < vs.size(); i++)
    {
        string s = vs[i];
        int len = 0;
        for (int j = 0; j < s.size(); j++)
        {
            len++;
        }
        maxlen = max(maxlen, len);
    }
    int n1 = vs.size() + 2;
    int m1 = maxlen + 2;
    vector<vector<char>> ans(n1, vector<char>(m1));

    for (int i = 0; i < m1; i++)
    {
        ans[0][i] = '*';
        ans[n1 - 1][i] = '*';
    }
    for (int i = 0; i < n1; i++)
    {
        ans[i][0] = '*';
        ans[i][m1 - 1] = '*';
    }
    int row = 1;
    for (int i = 0; i < vs.size(); i++)
    {
        string s = vs[i];
        int k = 0;
        int len = s.size();
        int dif = (m1 - len) - 2;
        int left = dif / 2;
        int right = m1 - (len + left);
        for (int j = 1; j < left; j++)
        {
            ans[row][j] = ' ';
        }
        for (int j = left + 1; j <= (m1 - right); j++)
        {
            ans[row][j] = s[k];
            k++;
        }
        for (int j = (m1 - right) + 1; j < m1 - 1; j++)
        {
            ans[row][j] = ' ';
        }
        row++;
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}