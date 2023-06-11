#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;  cin>>n>>m>>k;
    string a,b;  cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    string s="";
    int size = min(n,m);
    int i =0;
    int j =0;
    int cnt1=0;
    int cnt2=0;
    // cout<<a<<" "<<b<<endl;
    while(true){
        if((a[i]>=b[j]&& cnt1<k) || (cnt2==k)){
            // choose b
            s+=(b[j]);
            cnt1++;
            cnt2 =0;
            j++;
        }
        else if((a[i]<b[j]&& cnt2<k) || (cnt1==k)){
            // choose a
            s+= a[i];
            cnt2++;
            cnt1 =0;
            i++;
        }

        if(i>=n || j >= m){
            break;
        }
    }
 
    cout<<s<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}