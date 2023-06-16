#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x;  cin>>x;
    int a[3];
    for(int i =0;i<3;i++) cin>>a[i];

    if(a[x-1]==0){
        cout<<"NO\n";
        return;
    }
    bool t[3] ;
    for(int i =0;i<3;i++){
        t[i] = false;
    }
      
    for(int i =0;i<3;i++){
            t[x-1]=true;
            x = a[x-1];

    }
    int cnt=0;
    for(int i =0;i<3;i++){
        if(t[i]==true){
            cnt++;
        }
    }
    if(cnt==3){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}