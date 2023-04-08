#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int x,y,i=1;
	    cin>>x>>y;
        while(y<x){
        	 y+=i;
        	 //cout<<"y="<<y;
        	 if(y>=x){
        	     cout<<i<<endl;
        	 }
        i++;
        }
	}
	return 0;
}
