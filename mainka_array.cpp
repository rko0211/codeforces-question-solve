#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
 
    for(int i=0;i<n;i++)
    {cin>>a[i];
   
    }
    int ans =INT_MIN;
    // All elements are rotated
    for(int i=0;i<n;i++)
    {
       ans = max(ans,(a[(i-1+n)%n]-a[i]));
    }
   
    // Small element's are to be rotated
    for(int i=0;i<n;i++)
    {
        ans = max(ans,(a[n-1]-a[i]));
    }

    // Large elements
      for(int i=0;i<n;i++)
    {
        ans = max(ans,(a[i]-a[0]));
    }
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