#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    int n , a , b;
	    cin >> n >> a >> b;
	    
	   if( n % 2 == 1 && n <= 2){
	        cout << b * ((n + 1)/2 ) <<endl;
	   }
	   else if( n % 2 == 0){
	        cout << a * (n/2) + b * ((n+1)/2) <<endl;
	   }
	   
	   else{
	       cout << a * (n/2) + b * ((n+1)/2) <<endl;
	   }
	}
	return 0;
}
