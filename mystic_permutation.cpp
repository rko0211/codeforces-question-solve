#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    bool p[n];
    for(int i=1;i<=n;i++)
    {
        p[i]=true;
    }
   if(n==1)
   {
    cout<<-1<<endl;
    return ;
   }
   for(int i=1;i<=n-2;i++)
   {
      int k=1;
      while(p[k]==false || k==a[i]) k++;
      cout<<k<<" ";p[k]=false;
      
   }
   int x=-1,y=-1;

        for (int i=1;i<=n;i++) 
        if (p[i])
        {
            if (x==-1) x=i;
            else y=i;
        }


        if (x!=a[n-1] && y!=a[n]) cout<<x<<" "<<y<<"\n";
        else cout<<y<<" "<<x<<"\n";

 

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