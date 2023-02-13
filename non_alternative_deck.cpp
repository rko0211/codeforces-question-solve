#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
int a=0;int b=0;
int x=1;
bool flag=true;
while(n>0)
{
    if(flag)
    {
        if(x<n)
        a+=x;
        else a+=n;
        flag=false;
    }
    
   else
   {
    if(x<n)
    b+=x;
    else b+=n;
    flag=true;
   }

    n-=x;
    x+=4;

}
cout<<a<<" "<<b<<endl;

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