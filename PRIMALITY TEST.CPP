#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x=0;
	    for (int i = 1; i <= n; i++){
	        if (n%i == 0) x++;

	    }
	    if (x != 2){
	        cout<<"no"<<endl;
	    }
	    else {
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
