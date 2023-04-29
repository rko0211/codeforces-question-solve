#include <bits/stdc++.h>
using namespace std;
int arr[101];
void solve()
{

    int n, k;
    cin >> n >> k;
    int ans =0;
    int one=0;
    int minusone=0;
for(int i=0;i<=n;i++){
ans = ((i*(i-1))/2 + ((n-i)*(n-i-1))/2);
if(ans ==k){
    one =i;
    minusone=(n-i);
    break;
}
}
if(ans==k){
    cout<<"YES\n";

for(int i=1;i<=one;i++){
    cout<<1<<" ";
}
for(int j=1;j<=minusone;j++){
    cout<<-1<<" ";
}
cout<<endl;
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