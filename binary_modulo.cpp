#include<bits/stdc++.h>
using namespace std;
     int modulo(string s,int m)
        {
            //code here
            int num=0;
            long long fact =1;

           reverse(s.begin(),s.end());
           for(int i=0;i<s.size();i++){
               num+= ((s[i]-'0')*(fact*1))%m;
               
           }
           
           return  (num%m);
           
        }

int main(){

    int t;
    cin>>t;
    while(t--){
        string s; cin>>s;
        int m ; cin>>m;
       cout<<modulo(s,m)<<endl;
    }
}