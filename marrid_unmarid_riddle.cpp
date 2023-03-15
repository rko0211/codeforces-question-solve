#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    if(s.find('M')==string::npos)
    {
      cout<<"No\n";
      return;
    }
    bool ok=false;
    int ind;
   for(int i=s.size()-1;i>=0;i--)
   {
    if(s[i]=='U')
    {
        ok =true;
        ind=i;
        break;
    }
   }
   bool ok1 =false;
   int ind1;
   for(int i=0;i<ind;i++)
   {
    if(s[i]=='M')
    {
      ind1=i;
    }
   }
  if((ind-ind1)>0)
  {
    cout<<"Yes\n";
    return;
  }
    cout<<"No\n";
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