#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
int n; cin>>n;
ll a[n];
for(int i=0;i<n;i++) cin>>a[i];
if(n==3){
    if(a[1]%2==1) {
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<a[1]/2<<endl;
        return;
    }
}
int no_one=0;
for(int i=1;i<n-1;i++){
    if(a[i]==1){
        no_one++;
    }
}
if(no_one==(n-2)){
    cout<<-1<<endl;
    return;
}
ll ans =0;

for(int i=1;i<n-1;i++){
    if(a[i]%2==1){
        a[i]+=1;
    }
    ans+=(a[i]/2);
}
cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}