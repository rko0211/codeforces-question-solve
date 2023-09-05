#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    int sum =0;
    // int sum =0;
    int cnt =0;
    for(int i=0;i<n;i++){
        if(a[i]>1){
cnt++;
sum+=a[i];
        }
    }
if(cnt%2==sum%2)
{
    cout<<"maomao90\n";
}
else{
    cout<<"errorgorn\n";
}
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}