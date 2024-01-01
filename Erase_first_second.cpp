#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> st;
    long long int ans = 0;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
        ans+=st.size();
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