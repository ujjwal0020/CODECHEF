#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<=100)cout<<x<<endl;
	    if(x>100 && x<=1000)cout<<x-25<<endl;
	    if(x>1000 && x<=5000)cout<<x-100<<endl;
	    if(x>5000)cout<<x-500<<endl;
	}
	return 0;
}
