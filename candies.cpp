#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<-1<<endl;
        return;
    }
    if(n<3){
        cout<<-1<<endl;
        return;
    }
    int x = n>>1;
    vector<int>ans;
    while(x!=0){
    int rem = x%2;
    if(rem==0){
        ans.push_back(1);
    }
    else{
        ans.push_back(2);
    }

    x/=2;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main()
{

int t;  cin>>t;
while(t--)
{
    solve();
}

    return 0;
}