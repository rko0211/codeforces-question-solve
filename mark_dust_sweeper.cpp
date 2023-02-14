#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    ll sum=0;
    for (int i = 0; i < n; i++)
      {  cin >> a[i];
       
      }
  
      int first_nonzero_index=0;
  
  while(first_nonzero_index<n && a[first_nonzero_index]==0)
  {
    first_nonzero_index++;
 
  }
      for(int i=first_nonzero_index;i<n-1;i++)
      {
        sum+=a[i];
        if(a[i]==0)
        {
            sum++;
        }
      }
      cout<<sum<<endl;

      

 
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