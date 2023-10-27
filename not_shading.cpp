#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    int r, c; cin>>r>>c;
    char a[n][m];
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='B'){
                flag = true;
            }
        }
    }
    if(flag==false){
        cout<<-1<<endl;
        return;
    }
    if(a[r-1][c-1]=='B'){
        cout<<0<<endl;
        return;
    }
    bool flag1 = false;
    for(int i=0;i<n;i++){
        if(a[i][c-1]=='B'){
            cout<<1<<endl;
            return;
        }
    }
    for(int j=0;j<m;j++){
        if(a[r-1][j]=='B'){
            cout<<1<<endl;
            return;
        }
    }

    cout<<2<<endl;
}
int main(){



int t; cin>>t;
while(t--){
    solve();
}



    return 0;
}