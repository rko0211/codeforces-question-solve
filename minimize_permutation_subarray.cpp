#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
int onepos, tpos,lpos;
    for(int i=0;i<n;i++){
       if(a[i]==1){
        onepos=i;
       }
       else if(a[i]==2){
            tpos=i;
        }
       else if(a[i]==n){
                lpos=i;
        }
    }
    int ans1,ans2;
    // cout<<onepos<<" "<<tpos<<" "<<lpos<<endl;
if(abs(onepos-tpos)==1){
   if(abs(lpos-onepos)<abs(lpos-tpos)){
    ans1 = onepos;
   }
   else{
    ans1 = tpos;
   }
}
else{
    int ind;
    if(onepos<tpos){
        ind = onepos+1;
    }
    else if(onepos>tpos){
        ind = tpos+1;
    }
 
    ans1= ind;
}

ans2 = lpos;


// cout<<ans1<<" "<<ans2<<endl;
    // swap(a[ans1],a[ans2]);
    /* code */

// for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
// }
// cout<<endl;

cout<<ans1+1<<" "<<ans2+1<<endl;


}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}