#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, k;
    cin >> n >> k;
   int a[n];  for(int i=0;i<n;i++) cin>>a[i];
   long long int sum=INT_MIN;
 
   sort(a,a+n);
  long long int  pref[n+1];
  pref[0] =0;
  for(int i=0;i<n;i++){
    pref[i+1] = pref[i]+a[i];
  }
  
  for(int i=0;i<=k;i++){
    sum = max(sum, (pref[n-i]-pref[2*(k-i)]));
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