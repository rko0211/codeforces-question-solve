#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
// Chose any 2 days as answer
bool ans =false;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i!=j){
            int c1=0,c2=0,cn=0;
            for(int k=0;k<n;k++){
             if(a[k][i]==1){
                c1++;
             }
             if(a[k][j]==1){
                c2++;
             }
             if(a[k][i]==0 && a[k][j]==0){
                cn++;
             }

            }
           if(c1>=n/2 && c2>=n/2 && cn==0){
            ans=true;
           }

        }
    }
}
if(ans){
    cout<<"YES\n";
}
else
cout<<"NO\n";
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}