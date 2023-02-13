#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   int inc=0,dec=0;
   bool flag=false;
   for(int i=1;i<n;i++)
   {
    if(a[i]>a[i-1])
    {
        if(dec==0)
        {
            inc=1;

        }
        else{
            flag =true;
            break;
        }
    }
    else if(a[i]<a[i-1])
    {
        dec=1;
    }
   }
   if(flag) cout<<"NO\n";
   else cout<<"YES\n";
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