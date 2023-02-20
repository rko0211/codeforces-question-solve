#include<bits/stdc++.h>
using namespace std;
int main()
{

string s;
cin>>s;
string ans="";
for(int i=0;i<s.size();)
{
    if(s[i]=='.')
    {
        ans+=0+'0';
        i++;
    }
    else if(s[i]=='-')
    {
        if(s[i+1]=='.')
        {
            ans+=1+'0';
        }
        else{
            ans+=2+'0';
        }
        i+=2;
    }
    
}
cout<<ans<<endl;
    return 0;
}