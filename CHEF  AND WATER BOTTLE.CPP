#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,x,k;
	    cin>>n>>x>>k;
	    if((n*x)<k){
	        cout<<n<<endl;
	    }
	    else{
	        cout<<k/x<<endl;
	    }
	}
	return 0;
}
