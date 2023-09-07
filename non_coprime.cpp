#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll val = -1;

    
    for (int i = l; i <= r; i++)
    {
       val = i;
       ll divisor = -1;
       for(int j=2;j*j<=val;j++){
        if(val%j==0){
          divisor = j;
          break;
        }
       }
    //    cout<<divisor<<endl;
     if (divisor != -1)
    {
        val /= divisor;

        int y = 1;
        int x = val - y;

        cout << divisor*x << " " << divisor*y<< endl;
        return;
    }
    }



        cout << -1 << endl;
    
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