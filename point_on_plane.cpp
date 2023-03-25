#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long  n ;  cin>>n;
 long long x = ( long long)sqrt(n);
 while(x*x<=n)
 {
    x++;
 }
 x--;
    if(x*x==n)
    {
        cout<<x-1<<endl;
    }
    else
    cout<<x<<endl;
}
int main()
{

int t;  cin>>t;
while(t--)
{
    solve();
}
    return 0;
}