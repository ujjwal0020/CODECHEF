#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int ne,b;
	    
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    b=x-y;
	    ne=x+(x*0.1)-b;
	    cout<<ne<<endl;
	}
	return 0;
}
