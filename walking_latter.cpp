#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a,b;  cin>>a>>b;
    ll c,d ; cin>>c>>d;
    if(d<b){
        cout<<-1<<endl;
        return;
    }
    ll dif = abs(d-b);
    if((a+dif)==c && (b+dif)==d)
    {
        cout<<dif<<endl;
        return;
    }
    a+=dif; b+=dif;
    ll dif2 = abs(a-c);
    if((a-dif2)==c && b==d)
    {
        cout<<(dif+dif2)<<endl;
    }
    else
    cout<<-1<<endl;
    return;
}
int main()
{

int t;   cin>>t;
while(t--)
{
    solve();
}

    return 0;
}