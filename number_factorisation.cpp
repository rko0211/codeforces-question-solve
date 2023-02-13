#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    int primesfactor[100001];
    for (int i = 0; i <= 100000; i++)
    {
        primesfactor[i] = i;
    }
    // Using sieve of eratosthenesis we will find each factor
    for (int i = 2; i <= 100000; i++)
    {
        if (primesfactor[i] == i)
        {
            for (int j = i * i; j <= 100001; j += i)
            {
                if (primesfactor[j] == j)
                {
                    primesfactor[j] = i;
                }
            }
        }
    }
    int t; ll n;
    cin >> t;
    queue<pair<ll, ll>> q1, q2;
    while (t--)
    {
       
        cin >> n;

        ll ans = 0;

        // For any number 'n' its one factor must be less than or equal to sqrt(n);
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                int count = 0;
                while (n % i == 0)
                {
                    count++;
                    n /= i;
                }
                q1.push({i, count});
            }
        }
        if (n > 1)
        {
            q1.push({n, 1});
        }
        while (q1.empty() == false)
        {
            int sum = 1;

            while (q1.empty() == false)
            {
                sum *= q1.front().first;
                if (q1.front().second > 1)
                {
                    q2.push({q1.front().first, q1.front().second - 1});
                }
                q1.pop();
            }
            ans += sum;
            while (q2.empty() == false)
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
        cout << ans << endl;
    }

    return 0;
}