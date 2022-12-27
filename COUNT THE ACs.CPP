#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int a;
	    cin >> a;
	    int x = a%100 + a/100;
	    if(x>10){
	        cout<<"-1"<<endl;
	    }
	    else{
	        cout<< x<< endl;
	    }
	}
	return 0;
}
