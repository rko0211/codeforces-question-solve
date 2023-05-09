#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (odd == 0 || odd % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    int count;
    int ans =INT_MAX;
for(int i=0;i<n;i++){
count=0;

if(a[i]%2==0){
    while(a[i]%2==0 && a[i]!=0){
        count++;
        a[i]/=2;
    }

    if(a[i]%2==0){
        count=0;
    }else{
        ans = min(count,ans);
    }
}
else{
        while(a[i]%2==1 && a[i]!=0){
        count++;
        a[i]/=2;
    }

    if(a[i]%2==1){
        count=0;
    }else{
        ans = min(count,ans);
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