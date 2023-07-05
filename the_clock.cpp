#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int n = s.size();
    for (int i = 0; i < 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    string s;
    cin >> s;
    int x;
    cin >> x;
    int count = 0;

    string s1 ="";
    string temp = s;
    while (s1!=temp)
    {
        int val1 = 0, val2 = 0;
        if (isPalindrome(s))
        {
            count++;
        }
    //    cout<<s<<endl;
        val1 = 10 * val1 + (s[3] - '0');
        val1 = 10 * val1 + (s[4] - '0');
        val2 = 10 * val2 + (s[0] - '0');
        val2 = 10 * val2 + (s[1] - '0');

        val1  = (val1 + (x % 60)) ;
        int temp1 = val1/60;
        val1 %=60;
        s[4] = val1 % 10 + '0';
        val1 /= 10;
        s[3] = val1 + '0';

        val2 = (val2 + temp1 + (x / 60)) % 24;
        s[1] = val2 % 10 + '0';
        val2 /= 10;
        s[0] = val2 + '0';
        s1 = s;
       
    }

    cout<<count<<endl;
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