#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
bool flag =true;
for(int i=1;i<s.size();i++)
{
    // if(isupper(s[i]))
    // {
    //     flag=true;
    // }
    // else
    // {
    //     flag = false;
    //     break;
    // }
    flag = (flag && isupper(s[i]));
}

if(flag)
{
    for(int i=1;i<s.size();i++)
    {
      s[i]=tolower(s[i]);
    }
   if(isupper(s[0])) s[0]=tolower(s[0]);
   else s[0]=toupper(s[0]);
} 
cout<<s<<endl;
    return 0;
}