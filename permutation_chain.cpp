#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;  cin>>n;
    vector<vector<int>>v;
    vector<int>permu(n);
    for(int i=0;i<n;i++){
        permu[i]= (i+1);
    }

 v.push_back(permu);

int ind =0;
int k=ind+1;
swap(permu[ind],permu[k]);
v.push_back(permu);
ind++;
k++;
n-=2;
for(int j=n;j>0;j--){
swap(permu[ind],permu[k]);

v.push_back(permu);
ind++;
k++;
}


cout<<v.size()<<endl;

for(int i=0;i<v.size();i++){
for(int j=0;j<v[0].size();j++){
    cout<<v[i][j]<<" ";
}
cout<<endl;
}




}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}