#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++){
        cin>>a[i];
    }
    deque<int>dq;
    dq.push_back(a[0]);
  
    for(int i=1;i<n;i++){
        if((a[i]<dq.front())){
                dq.push_front(a[i]);
        }
        else{
            dq.push_back(a[i]);
        }
    }
    for(auto &it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}