#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
 vector<int>freq(10,0);
 for(int i=0;i<s.size();i++)
 {
    freq[s[i]-'0']++;
 }
 int maxval=INT_MIN;
 for(auto &it:freq)
 {
    maxval= max(maxval,it);
 }
 if(maxval==1)
 {
    cout<<4<<endl;
    return;
 }
 else if(maxval==2)
 {
    cout<<4<<endl;
    return;
 }
 else if(maxval==3)
 {
    cout<<6<<endl;
    return;
 }
 else
 {
    cout<<-1<<endl;
 }
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