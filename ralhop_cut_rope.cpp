#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
 
    int count =0;
    while(n--){
        int a,b;
        cin>>a>>b;
       if(b<a){
        count++;
       }
    }
    cout<<count<<endl;

}
int main(){

int t; cin>>t;
while(t--){
    solve();
    
    }

    return 0;
}