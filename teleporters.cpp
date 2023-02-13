#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    int n,c;
    cin>>n>>c;
    ll a[n];
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v[i]=(a[i]+(i+1));
    }
    sort(v.begin(),v.end());
    ll no_teleporter=0;
    for(int i=0;i<n;i++)
    {
       if(c>=v[i])
       {
        no_teleporter++;
       }
       else{
        break;
       }
       c-=v[i];
    }
    cout<<no_teleporter<<endl;

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