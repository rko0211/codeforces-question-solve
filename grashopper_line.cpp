#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,k;  cin>>x>>k;
    if(k>x){
        cout<<"1"<<endl;
        cout<<x<<endl;
        return;
    }
    else if(x%k!=0){
        cout<<"1\n";
        cout<<x<<endl;

        return;
    }
    else{
        cout<<"2\n";
        if(x>0){
           cout<<(x+1)<<" "<<-1<<endl;
        }
        else{
            cout<<-(x+1)<<" "<<1<<endl;
        }
    }
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}