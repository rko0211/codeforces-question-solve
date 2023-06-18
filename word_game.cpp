#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;  cin>>n;
    string a[3][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j];
        }
    }
    map<string,int>m;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            m[a[i][j]]++;
        }
    }
    int ans[3];
    int k=0;
    for(int i=0;i<3;i++){
        int count=0;
       for(int j=0;j<n;j++){
          if(m[a[i][j]]==1){
            count+=3;
          }
          else if(m[a[i][j]]==2){
            count+=1;
          }
       }
       ans[k]=count;
       k++;
    }
    for(int i=0;i<3;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}