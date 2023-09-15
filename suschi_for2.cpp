#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
ll n; cin>>n;
ll a[n]; for(int i=0;i<n;i++) cin>>a[i];
vector<int>v;
int cnt1 = 0;
int cnt2 = 0;

for(int i=0;i<n;i++){
if(a[i]==1){
    cnt1++;
    if(cnt2!=0)
    v.push_back(cnt2);
    cnt2 = 0;
}
else {
    if(cnt1!=0)
    v.push_back(cnt1);
    cnt1 = 0;
    cnt2++;
}
}
if(cnt1!=0)
{
v.push_back(cnt1);
}
if(cnt2!=0){
    v.push_back(cnt2);
}
int ans = INT_MIN;
for(int i=0;i<v.size()-1;i++){
    int val = min(v[i],v[i+1]);
    ans = max(ans,2*val);
}
cout<<ans;
cout<<endl;

}
int main(){



    solve();

    return 0;
}