#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;  cin>>a>>b;
    if(abs(a)==abs(b))
    {
        cout<<(abs(a)+abs(b))<<endl;
        return;
    }
    else
    {
        int maxval = max(abs(a),abs(b));
        cout<<(maxval+(maxval-1))<<endl;
        return;
    }
}
int main()
{

int t;
cin>>t;
while(t--)
{
    solve();
}
    return 0;
}