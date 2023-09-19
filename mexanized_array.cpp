#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x < k && (k - x) >= 2)
    {
        cout << -1 << endl;
        return;
    }
  if(n<k && (k-n)>=1){
    cout<<-1<<endl;
    return;
  }
  int sum =0;

  for(int i=0;i<k;i++){
    sum+=i;
  }
  int val = x;
  if(val==k){
    val--;
  }
  int size = (n-k);
  while(size>0){
    sum+=val;
    size--;
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