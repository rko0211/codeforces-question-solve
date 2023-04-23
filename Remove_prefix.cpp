#include <bits/stdc++.h>
using namespace std;
// int m = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    deque<int> dq;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dq.push_back(a[i]);
    }

  unordered_map<int,int>pref;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        pref[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(pref[a[i]]>1){
            while(dq.front()!=a[i]){
                pref[dq.front()]--;
                dq.pop_front();
                ans++;
            }
            if(dq.front()==a[i]){
                pref[dq.front()]--;
                dq.pop_front();
                ans++;
            }
        }
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