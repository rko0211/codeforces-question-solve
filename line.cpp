#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll sum = 0;
    ll change[n];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            sum += i;
        }
      else
        {
            sum += (n - (i + 1));
        }
        if(s[i]=='R')
        {
            change[i] = i-n+i+1;
        }
        else
        change[i] = n-i-1-i;
    }
 
    sort(change,change+n);
    reverse(change,change+n);
    for(int k=0;k<n;k++)
    {
        if(change[k]>0)
        {
            sum+=change[k];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
   
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