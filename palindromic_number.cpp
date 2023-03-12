#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
  if(s[0]!='9')
  {
        for (int i = 0; i < n; i++)
        {
            int x = (9 - (s[i] - '0'));
            ans += x + '0';
        }
   
  }
  else
  {
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = s[i] - '0';
            x += c;
            if (x > 1)
            {
                int y = 11 - x;
                c = 1;
                ans += y + '0';
            }
            else
            {
                c = 0;
                int y = 1 - x;
                ans += y + '0';
            }
        }
        reverse(ans.begin(), ans.end());
  }
  cout<<ans<<endl;
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