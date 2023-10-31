#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    int zcnt =0;
    int ocnt =0;
    int ans1 = 0;
    int ans2 = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            ocnt++;
        }
        else{
            zcnt++;
        }
        if(zcnt>0 && ocnt>0){
            if(zcnt>ocnt){
                ans1 = max(ans1,ocnt);
            }
            else if(zcnt<ocnt){
                ans2 = max(ans2,zcnt);
            }
        }
    }
    cout<<max(ans1,ans2)<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}