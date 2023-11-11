#include <bits/stdc++.h>
using namespace std;
bool isPrime(int k)
{
    if(k==1){
        return false;
    }
    for (int i = 2; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (!isPrime(s[i] - '0'))
        {
            ans += s[i];
            break;
        }
    }
    if (ans.size() >= 1)
    {
        cout << ans.size() << endl;
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (j == i)
            {
                if (!(isPrime(s[j] - '0')) || s[j] == '1')
                {
                    ans += s[j];
                    break;
                }
            }
            else
            {
                int val = 1;
                val *= (s[i] - '0');
                val *= 10;
                val += (s[j] - '0');
                if (!isPrime(val))
                {
                    ans += s[i];
                    ans += s[j];
                    break;
                }
            }
        }
        if (ans.size() >= 1)
        {
            break;
        }
    }
    cout << ans.size() << endl;
    cout << ans << endl;
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