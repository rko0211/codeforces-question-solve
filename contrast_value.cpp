#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll contrast = 0;
    for (int i = 0; i < n - 1; i++)
    {
        contrast += abs(a[i + 1] - a[i]);
    }
    if (contrast == 0)
    {
        cout << 1 << endl;
        return;
    }
  vector<int>res;
  for(int i=0;i<n-1;i++){
    int val = (a[i]-a[i+1]);
    if(val!=0){
        if(res.size()>0){
            int prev = res.back();
            if(prev>0 && val<0) res.push_back(val);
            else if(prev<0 && val>0) res.push_back(val);
        }
        else{
            res.push_back(val);
        }
    }
  }

  cout<<res.size()+1<<endl;
    

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