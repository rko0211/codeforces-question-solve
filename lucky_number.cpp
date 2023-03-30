#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int res(int a)
{
    string s = to_string(a);
    return (*max_element(s.begin(),s.end())-*min_element(s.begin(),s.end()));
}
void solve()
{

    int l, r;
    cin >> l >> r;

int ans=l;
int temp=0;
for(int i=l;i<=r;i++)
{
   
    int v = res(i);
    if(v==9)
    {
        cout<<i<<endl;
        return;
    }
    if(temp<v)
    {
        temp=v;
        ans=i;
    }
}
cout<<ans<<endl;




    // O(nlogn)
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