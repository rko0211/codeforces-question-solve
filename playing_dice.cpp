    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    void solve() {
    int a, b;
    cin>>a>>b;
     
    int draw = 0;
     
     
    int f=0, l=0;
    for(int I=1;I<=6;I++) 
    {
     if(abs(a-I) < abs(b-I) ) f++;
     else if(abs(a-I) > abs(b-I)) l++;
     else {
     draw++;
     }
    }
    cout<<f<<" "<<draw<<" "<<l<<endl;
     
    }
     
    int main() 
    {
     //   int t;cin>>t;
       // while(t--) 
        solve() ;
        
    return 0;
    }
