#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    int j =-1;
    int ele ;
    for(int i=0;i<n;i++){
       if(a[i]!=(i+1)){
          j = i;
          ele = (i+1);
          break;
       }
    }
    int k =-1 ;
    for(int i=j;i<n;i++){
        if(a[i]==ele){
        k = i;
        break;
        }
    }
    if(j!=-1){
    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }
    for(int i=k;i>=j;i--){
        cout<<a[i]<<" ";
    }
    for(int i=k+1;i<n;i++){
        cout<<a[i]<<" ";
    }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
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