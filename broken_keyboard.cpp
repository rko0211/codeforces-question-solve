#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
   bool ok = false;
    if(n>3){
for (int i = 1; i <= n - 3;i+=3)
    {
      if(s[i]!=s[i+1]){
        cout<<"NO\n";
        return;
      }
      else{
        ok=true;
      }

    }

    }

    else{
        if(n==3){
            if(s[1]==s[2]){
                cout<<"YES\n";
                return;
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
        if(n<=2){
            cout<<"NO\n";
            return;
        }
    }
    
    if(ok){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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