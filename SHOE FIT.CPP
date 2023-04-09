#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t ;
	while(t--){
	    int a, b,c ;
	    cin >> a >> b >> c ;
	    int ctr1 =0  , ctr2=0;
	    if(a==0 || b==0 || c==0){
	        ctr1++ ;
	    }
	    if(a==1 || b==1 || c==1){
	        ctr2++ ;
	    }
	    if(ctr1 > 0  && ctr2 > 0){
	        cout << 1 << endl;
	    }
	    else{
	        cout << 0 << endl ;
	    }
	    
	}
	return 0;
}
