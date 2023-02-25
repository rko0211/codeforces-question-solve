#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int n; cin>>n;
    string s;
    cin>>s;
  string s1=s;
  for(int i=0;i<n/2;i++)
  {
    s[i]=s[n-i-1];
  }
  int count=0;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    if(s[i]!=s1[i])
    {
        count++;
    }
    else
    {
        if(count>0) v.push_back(count);
        count=0;
    }

  }
     if(v.size()<2) cout<<"YES\n";
    else cout<<"NO\n";
}
    return 0;
}