#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mini = min({a, b, c});
    int cnt = 0;
    if(a%mini!=0 || b%mini!=0 || c%mini!=0){
        cout<<"NO\n";
        return;
    }
   cnt+=((a/mini - 1)+(b/mini -1) +(c/mini -1));
    // cout<<cnt<<endl;
    if (cnt <= 3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
