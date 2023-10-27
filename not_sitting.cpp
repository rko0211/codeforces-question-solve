#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    int val = (abs(n-1)+abs(m-1));
    int a[n][m];
    int rmid = (n+1)/2;
    int cmid = (m+1)/2;
   
      for(int j=0;j<cmid;j++){
        a[0][j] = val;
        val--;
      }
      for(int j=cmid;j<m;j++){
        a[0][j] = a[0][m-j-1];
       
      }

      for(int j=0;j<m;j++){
         a[n-1][j] = a[0][j];
      }

    
    for(int i=1;i<rmid;i++){
        for(int j=0;j<m;j++){
            a[i][j] = (a[i-1][j]-1);
            a[n-i-1][j] = a[i][j];
        }
    }
vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           ans.push_back(a[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    for(auto &it:ans){
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