#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
ll range = 1e3;
vector<ll> findFactors(ll num)
{
    vector<ll> factors;
    for (ll i = 1; (i * i <= range); ++i)
    {
        if (num % i == 0)
        {
            factors.push_back(i);
            if (i != num / i)
            {
                factors.push_back(num / i);
            }
        }
    }
    return factors;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll num;

        cin >> num;
        ll ans =1;
        for (int i = 1; i <= range; i++)
        {
            if (num % i != 0)
            {
                ans = i;
                break;
            }
        }
        cout << ans - 1 << endl;
        // vector<ll> factors = findFactors(num);
        //   sort(factors.begin(),factors.end());
        //   int cnt =1;
        //   int ans =1;
        //   for(int i=0;i<factors.size()-1;i++){
        //     if(factors[i]+1 == factors[i+1]){
        //         cnt++;
        //     }
        //     else{
        //         ans = max(ans,cnt);
        //         cnt=1;
        //     }
        //   }
        //   ans = max(ans,cnt);
       
        //     cout << "Factors of " << num << ": ";
        //     for (ll factor : factors) {
        //       cout << factor << " ";
        //     }
        //   cout << endl;
    }
    return 0;
}
