#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    // int a[11];
    // a[0] = 0;

    // for(int i=1; i<11;i++){
    //     a[i] = i;
    //     if(i==10){
    //         a[i] = 0;
    //     }
    // }

    int last = 1;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
        {    ans += abs(s[i] - '0' - last);
        last = (s[i] - '0');
}
        else
        {
            ans += (10 - last);
            last = 10;
        }
        ans++;
        
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