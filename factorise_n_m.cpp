#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return true;
 
    return false;
}
void solve()
{
    int n;
    cin >> n;
int val;
    for (int i = 2; i <= n; i++)
    {
      
        
         val = (n + i);
       
            if (isPrime(val))
            {
                cout << i << endl;
                return;
            }
      
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