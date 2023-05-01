#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;  cin>>n>>m;
    string a; cin>>a;
    string b; cin>>b;
   int i = a.size()-1; int j=b.size()-1;
   while((j)>=1){
    if(a[i]!=b[j]){
        cout<<"NO\n";
        return;
    }
    i--; j--;
   }
   for(int k=0;k<=i;k++){
    if(b[j]==a[k]){
        cout<<"YES\n";
        return;
    }
   }
   cout<<"NO\n";

}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}