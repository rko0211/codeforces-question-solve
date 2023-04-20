#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
 
    if (k > n)
    {
        cout << (k - n) << endl;
        return;
    }
 

 else if(n%2 == k%2){
    cout<<0<<endl;
}
else{
    cout<<1<<endl;
}
          
        
    
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