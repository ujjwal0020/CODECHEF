#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,c=0,d=0;
	    cin>>n;
	    string a,b;
	      cin>>a;
	      cin>>b;

	    
	    for(int i=0;i<n;i++){
	    if(a[i]=='1') c++;
	    if(b[i]=='1') d++;
	    }
	    
	    if(c==d) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
