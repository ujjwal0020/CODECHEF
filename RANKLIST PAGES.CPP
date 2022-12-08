#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    
	    int x,ans;
	    cin>>x;
	    ans=x/25;
	    
	    if(x%25==0){
	    
	    cout<<ans<<endl;
	    }
	    else{
	        cout<<ans+1<<endl;
	    }
	}
	return 0;
}
