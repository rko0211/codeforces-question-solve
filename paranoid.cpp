// We have to find number of substring that are paranoid
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
  ll ans =0;
    ans+=n;
for(int i=1;i<n;i++){
    if(s[i]!=s[i-1]){
        ans+=i;
    }
}
cout<<ans<<endl;


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