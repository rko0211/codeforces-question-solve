#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &str,int n,int ind){
    if(ind>n/2){
    return true;
    }
    if(str[ind]!=str[n-ind-1]){
        return false;
    }
    return palindrome(str,n,ind+1);

}
    bool isPalindrome(string s) {
        string newstring="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                newstring+=(s[i]+32);
            }
            if(s[i]>='0' && s[i]<='9'){
                newstring+=s[i];
            }
            else if(s[i]<'a'|| s[i]>'z'){
                continue;
            }
            else{
                newstring+=s[i];
            }
        }
           cout<<newstring<<endl;
        if(newstring.size()==0){
            return true;
        }

       int n = newstring.size();
        if(palindrome(newstring,n,0)){
            return true;
        }

        return false;

    }
int main(){

string s;  cin>>s;
if(isPalindrome(s)){
    cout<<"True\n";
}
else{
    cout<<"NO\n";
}

return 0;
}