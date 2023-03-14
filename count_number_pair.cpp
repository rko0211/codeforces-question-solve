#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;  cin>>n>>k;
    string s;
     cin>>s;
 
     vector<int>big(26,0);
     vector<int>small(26,0);
     int burl=0;
     for(int i=0;i<n;i++)
     {
        if(s[i]>='A'&&s[i]<='Z')
        {
            big[s[i]-'A']++;
        }
        else
        {
            small[s[i]-'a']++;
        }

     }
     for(int i=0;i<26 ;i++)
     {
        int val = min(small[i],big[i]);
        burl+=val;
        small[i]-=val;
        big[i]-=val;
        // now greedy approach
        int amount =  min(k,max(big[i],small[i])/2);
        k-=amount;
        burl+=amount;
     }
 

     cout<<burl<<endl;

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