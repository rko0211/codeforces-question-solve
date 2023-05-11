// The least/smallest number which is divisible by both the value is called the lcm value

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << n << endl;
        return;
    }
    if (n == 2)
    {
        cout << "2 1" << endl;
        return;
    }
    int ans[n];
  
    for (int i = 0; i < n ; i ++)
    {
   ans[i] =(i+1);
    }
for(int i=n-1;i>0;i-=2){
    swap(ans[i],ans[i-1]);
}

    for (int i = 0; i < n; i++)
    {
        cout << ans[i]<<" ";
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