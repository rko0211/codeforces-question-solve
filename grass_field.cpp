#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n =2;
    int a[n][n];
for(int i=0;i<n;i++){
    for(int j =0;j<n;j++){
        cin>>a[i][j];
    }
}
int onecount=0;
if(a[0][0]==1)onecount++;
if(a[0][1]==1) onecount++;
if(a[1][0]==1) onecount++;
if(a[1][1]==1) onecount++;
if(onecount==0) {
    cout<<0<<endl;
    return ;
}

if(onecount==4) {
    cout<<2<<endl;
    return ;
}
cout<<1<<endl;

}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}