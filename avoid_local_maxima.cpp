#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++)cin>>a[i];
    int cnt =0;
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            cnt++;
            if((i+2)<n)
            a[i+1] = max(a[i],a[i+2]);
            else{
                a[i+1]=a[i];
            }
            
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}