#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (b == 1)
    {
        cout << "NO\n";
        return;
    }
    // if(a==1){
    //     cout<<"YES\n";
    //     cout<<1<<" "<<(3*(a*b) - 1)<<" "<<3*(a*b)<<endl;
    //     return;
    // }
cout<<"YES\n";
cout<<a<<" "<<(a*b)<<" "<<(a*(b+1))<<endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }

    return 0;
}