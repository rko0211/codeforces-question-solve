#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int neg=0;int pos=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       if(a[i]<0) neg++;
       else pos++;
    }
    if(neg==0)
    {a[0]=-a[0];
    a[1]=-a[1];}
  
  else{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<0 && a[i+1]<0)
        {
            a[i]=-(a[i]);
            a[i+1]=-(a[i+1]);
          
            break;
        }
    }
  }
    
    int ans=0;
    for(int i=0;i<n;i++)
    ans+=a[i];
    cout<<ans<<endl;
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