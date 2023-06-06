#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    int count = 1;
    int len;
    int j;
    for (int i = 0; i < n; i += len)
    {
          

            j = i + 1;

            while (s[j] != s[i] && j<n)
            {
                count++;
                j++;
            }
        
        if(s[i]==s[j]){
            count++;
        }
        len = count;
        count=1;
        ans += s[i];
       
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