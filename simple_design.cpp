#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int f(int x){
    return x?(f(x/10)+x%10):0;
}
void solve()
{
int x,k; cin>>x>>k;

while(f(x)%k!=0){
    x++;
}
 cout<<x<<endl;
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