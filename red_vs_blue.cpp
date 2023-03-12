#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,r,b;
    cin>>n>>r>>b;
    string s="";
    int p = b+1;
    int q = (r/p);
    int rem = r%p;
    for(int i=0;i<rem;i++) cout<<string(q+1,'R')<<'B';
    for(int i=rem;i<b;i++) cout<<string(q,'R')<<'B';
    cout<<string(q,'R');
    cout<<endl;
  
    
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