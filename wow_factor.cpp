#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

    string s;
    cin>>s;
    int n = s.size();
    vector<ll>front(n);
    vector<ll>rear(n);
    front[0]=0;
    for(int i=1;i<n;i++)
    {
      if(s[i]=='v' && s[i-1]=='v')
      {
        front[i]=front[i-1]+1;
      }
      else{
        front[i]=front[i-1];
      }
    }
    rear[n-1]=0;
      for(int i=n-2;i>=0;i--)
    {
      if(s[i]=='v' && s[i+1]=='v')
      {
        rear[i]=rear[i+1]+1;
      }
      else{
        rear[i]=rear[i+1];
      }
    }

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='o')
        {
            ans+=front[i]*rear[i];
        }
    }
    cout<<ans<<endl;
}
int main()
{



    solve();

    return 0;
}