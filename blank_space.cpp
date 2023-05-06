#include<bits/stdc++.h>
using namespace std;
void solve(){
    int  n;  cin>>n;
    int a[n];  for(int i=0;i<n;i++) cin>>a[i];
    int ans =INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
        }
        else{
            ans = max(ans,count);
            count=0;
        }
    }
    ans = max(ans,count);
    cout<<ans<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}