#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
for(int i=n-1;i>0;i-=2){
    if(a[i]<a[i-1]){
        swap(a[i],a[i-1]);
    }
}
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        cout<<"NO\n";
        return;
    }
}
cout<<"YES\n";
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