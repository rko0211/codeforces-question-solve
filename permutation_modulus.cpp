#include<bits/stdc++.h>
using namespace std;
void solve()
{
 int n;
 cin>>n;
 int ans[n];
 ans[0]=2;
 for(int i =1;i<n-1;i++)
 {
   ans[i] =ans[i-1]+1;
 }
 ans[n-1]=1;
 for(int i=0;i<n;i++)
 cout<<ans[i]<<" ";
 cout<<endl;

}
int main()
{
int t;
cin>>t;
while(t--)
{
    solve();
}


    return 0;
}