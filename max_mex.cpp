#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s1,s2;
    cin>>s1>>s2;

    int i =0;
    int ans =0;
    while(i<n){
     if(s1[i]!=s2[i]){
        ans+=2;
        i++;
     }
     else{
        // s1[i] == s2[i] =='0'
        if((i+1)<n && (s1[i]=='0' && s1[i]!=s1[i+1] && s1[i]!=s2[i+1])){
            ans+=2;
            i+=2;
        }
        else if(s1[i]=='0'){
            ans++;
            i+=1;
        }
        else{
            // s1[i]=='1' && s2[i]=='1'
            while(i<n && (s1[i]!='0')&&(s2[i]!='0')){
                i++;
            }
            if(i<n){
                ans+=2;
                i++;
            }
            
        }
     }
    }

    cout<<ans<<endl;

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}