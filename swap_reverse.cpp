#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]].push_back(i);
    }
    if (k % 2 == 0)
    {
        sort(s.begin(), s.end());
        cout << s << endl;
        
    }
    else{
    char ans[n];
    int x = 0;
    int y = 1;
    for (auto &it : m)
    {
        for (auto &itr : it.second)
        {
            if (itr % 2 == 0)
            {
                ans[x] = it.first;
                x += 2;
            }
            else
            {
                ans[y] = it.first;
                y += 2;
            }
        }
    }
   string str="";
   for(int i=0;i<n;i++){
    str+=ans[i];
   }
   cout<<str<<endl;
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