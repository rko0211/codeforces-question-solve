#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt1 = 0;
    int cnt2 = 0;
    int val1 = a[0];
    int val2 = a[n - 1];
    int ind1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val1)
           { cnt1++; ind1 = i;}
        if (cnt1 == k)
        {
          
            break;
        }
    }

    for (int i = ind1 + 1; i < n; i++)
    {
        if (a[i] == val2)
        {
            cnt2++;
        }
    }

   if(a[0]==a[n-1]){
    if((cnt1+cnt2)>=k){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
   }
   else{
    if(cnt1>=k && cnt2>=k){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
   }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }

    return 0;
}