#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll mex(vector<ll>&nums){
 int n = nums.size();

    // Create a boolean array to mark visited elements
    std::vector<bool> visited(n + 1, false);

    // Mark elements present in the vector as visited
    for (int num : nums) {
        if (num >= 0 && num <= n)
            visited[num] = true;
    }

    // Find the first non-visited element
    for (int i = 0; i <= n; i++) {
        if (!visited[i])
            return i;
    }

    // If all elements from 0 to n are visited, the Mex is n+1
    return n + 1;
}
void solve(){
int n ; cin>>n;
ll a[n];
bool flag =false;
for(int i=0;i<n;i++){ 
    
    cin>>a[i];
   if(a[i]==0){
    flag =true;
   }

}

ll ans =0;
if(!flag){
    while(n>0){
        ans+= (n*(n+1)/2);
        n--;
    }
    cout<<ans<<endl;
    return;
}

vector<vector<ll>>v;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        vector<ll>temp;
        for(int k=i;k<=j;k++){
            temp.push_back(a[k]);
        }
        v.push_back(temp);
        temp.clear();
    }
}

// for(int i=0;i<v.size();i++){
//     for(int j=0;j<v[i].size();j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;

for(int i=0;i<v.size();i++){
   
   ll mexval = mex(v[i]);
   ll countz = count(v[i].begin(),v[i].end(),0);
    ans+=(v[i].size()+ countz*1);
}
cout<<ans<<endl;


}
int main(){

int t; cin>>t;
while (t--)
{
    /* code */
    solve();
}



    return 0;
}