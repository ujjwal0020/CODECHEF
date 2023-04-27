#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%10==0){
	        cout<<100-x<<endl;
	    }
	    else if(x%10<5){
	        cout<<100-(x-(x%10))<<endl;
	    }
	    else if(x%10>=5){
	        cout<<100-(x+(10-(x%10)))<<endl;
	    }
	}
	return 0;
}
