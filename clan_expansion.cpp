#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n]; for(int i=0;i<n;i++)cin>>a[i];

    map<int,vector<int>>um;
    
    for(int i=0;i<n;i++){
     um[a[i]].push_back(i);
    }
    if(um.size()==1){
       cout<<a[0]<<" "<<0<<endl;
       return;
    }
    
// for(auto &it:um){
//     cout<<it.first<<endl;
//     for(auto &itr:it.second){
//         cout<<itr<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;
int ans1 = INT_MAX;//islend number
int  ans2 = INT_MAX;// time
for(auto &it:um){
    int maxi = INT_MIN;
    maxi = max(maxi, (it.second[0]));
    for(int i=0;i<it.second.size()-1;i++){
       
        
        maxi = max(maxi,abs(it.second[i+1]-it.second[i]-1)/2 + abs(it.second[i+1]-it.second[i]-1)%2);

       
    }

    int p = it.second.size();
    maxi = max(maxi,abs(n -1 -it.second[p-1]));
    // cout<<maxi<<endl;

  if(ans2>maxi){
    ans2 = maxi;
    ans1 = it.first;
  }
}
// cout<<endl;

cout<<ans1<<" "<<ans2<<endl;
// cout<<endl;
  
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}