#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    int a = min(x, y);
    int b = max(x, y);

    while(k--){
          if(a==b){
            break;
        }
        int val = __gcd(a,b);
        if(a>b){
            a = val;
        }
        else{
            b = val;
        }
        if(a==b){
            break;
        }
        val = (a*b)/(__gcd(a,b));
          if(a>b){
            a = val;
        }
        else{
            b = val;
        }
        if(a==b){
            break;
        }
    }
    cout<<(a+b)<<endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
