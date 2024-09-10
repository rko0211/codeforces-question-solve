#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool flag[n] = {false};
    bool f = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
        {
            f = true;
            break;
        }
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    int l = 1e7 , h =1e7;
for(int i=0;i<n;i++){
    if(l>h){
        swap(l,h);
    }
    if(a[i]<=l){
        l = a[i];
    }
    else if(a[i]<=h){
        h=a[i];
    }
    else{
        l=a[i];
        ans++;
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