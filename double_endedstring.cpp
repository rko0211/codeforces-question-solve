#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2; cin>>s1>>s2;
    string temp ="";
    string s ;
    string p;
    if(s1.size()>=s2.size()){
        s = s2;
        p = s1;
    }
    else{
        s = s1;
        p = s2;
    }
    for(int i=0;i<s.size();i++){
       
        for(int j = i;j<s.size();j++){
             string str="";
            for(int k=i;k<=j;k++){
             str+=s[k];
            }
            if(p.find(str)!=string::npos){
                if(temp.size()<str.size()){
                    temp = str;
                }
            }
        }
    }
    int ind = p.find(temp);
    if(ind!=string::npos){
        int x = (ind+ (p.size()-ind-temp.size()));
        int ind1 = s.find(temp);
        int y = (ind1+(s.size()-ind1-temp.size()));
        cout<<(x+y)<<endl;
    }
    else{
        cout<<(s.size()+p.size())<<endl;

    }
}
int main(){

int t; cin>>t;
while(t--)
{
    solve();
}

    return 0;
}