#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n, x, sum=0, c;
	    cin>>n>>x;
	    
	    for (int i=0; i<n-1; i++) {
	        int a;
	        cin>>a;
	        sum += a;
	    }
	    c = n*x - sum;
	    
	    cout<<(c<0 ? 0 : c)<<endl;
	}
	return 0;
}
