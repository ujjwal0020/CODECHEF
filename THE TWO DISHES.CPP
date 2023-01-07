#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,s,diff=0;
	    cin>>n>>s;
	    if(n>=s){
	        diff=s;
	        
	    }else{
	        diff=n-(s-n);
	      } 
	     cout<<diff<<endl;
	}
    return 0;	    
}
