#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t>0){
	    int g1=0; //goal by team 1
	    int g2=0; //goal by team g2
	    int a[10], i;
	    // odd= team 1; even= team 2
	    
	    for(i=0; i<10; i++) {
	        cin>>a[i];
	    }
	    
	    for(i=0; i<10; i=i+2) {
	            if (a[i]==1) g1++;
	        }
	        
	        for(i=1; i<10; i=i+2) {
	            if (a[i]==1) g2++;
	        }
	    
	    if (g1>g2) cout<<"1"<<endl;
	    else if (g2>g1) cout<<"2"<<endl;
	    else cout<<"0"<<endl;
	    
	    t--;
	}
	return 0;
}
