#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_map<char, int> m;
    while (n--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'h' || s[i] == 'e' || s[i] == 'f')
            {
                m[s[i]]++;
            }
        }
    }

    if(!(m['c']&& m['o'] && m['d'] && m['e'] && m['h']&& m['e']&& m['f']))
    {
        cout<<0<<endl;
        return;
    }

// codechef
/*
 c->2
 o->1
 d->1
 e->2
 h->1
 f->1

*/
int count=0;

int minval=INT_MAX;
    for(auto &it:m){
       if(it.first=='c' || it.first=='e'){
        minval = min(minval,it.second/2);
       }
       else{
        minval = min(minval,it.second);
       }
    }
 cout<<minval<<endl;
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