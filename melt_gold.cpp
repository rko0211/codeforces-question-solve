#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
	while(t--){
	    int x,y; cin>>x>>y;
	    int count=0;
	    int i=1;
        while(y<x){
            y+=i;
            i++;count++;
        }
	    cout<<count<<endl;
	}
	return 0;
}
