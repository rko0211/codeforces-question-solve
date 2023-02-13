

#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main()

{



    

    ll t, n, i, j;

    string a, b, c, s;

    cin>>t;

    

    for(;t--;)

    {

        cin>>s;

        n=s.size();

        

        if(s[0]==s[n-1]){

            a=s[0];

            c=s[n-1];

            

            b="";

            for(i=1; i<n-1; i++){

                b+=s[i];

            }

            

            cout<<a<<" "<<b<<" "<<c<<"\n";

        }else{

            if(s[0]==s[1]){

                a=s[0];

                b=s[1];

                c="";

                for(i=2; i<n; i++){

                    c+=s[i];

                }

            }else{

                if(s[0]=='a'){

                    a=s[0];

                    c=s[n-1];

                    b="";

                    for(i=1; i<n-1; i++){

                        b+=s[i];

                    }

                }else{

                    a=s[0];

                    b=s[1];

                    c="";

                    

                    for(i=2; i<n; i++){

                        c+=s[i];

                    }

                }

            }

            cout<<a<<" "<<b<<" "<<c<<"\n";

        }

    }
}
