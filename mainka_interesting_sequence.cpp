#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, m;
    int f=0;
    cin >> n >> m;
    if (n > m)
    {
        cout << "NO" << endl;
        return;
    }
    else if (n % 2 == 0 && m % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        ll ans[n];
        if (n % 2 != 0)
        {
            for (int i = 0; i < (n - 1); i++)
            {
                ans[i] = 1;
            }
            ans[n - 1] = (m - (n - 1));
        }
       else{
        for(int i=0;i<n-2;i++)
        {
            ans[i]=1;
        }
        m=m-(n-2);
        if(m>0 && m%2==0)
        {
            ans[n-2]=m/2;
            ans[n-1]=m/2;
        }
        else
        {
            f=1;
        }
       }

       if(f==1)
       {
        cout<<"NO\n";
        return;
       }
       else
       {
        cout<<"YES\n";
          for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
       }
      
        
      
        return ;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}