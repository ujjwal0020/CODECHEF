#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=3){
	        cout<<(x*y)<<endl;
	    }
	    else if (x%3==0){
	        int n=(((x/3)-1)*z)+(x*y);
	        cout<<n<<endl;
	    }
	    else{
	        cout<<((x/3)*z)+(x*y)<<endl;
	    }
	}
	return 0;
}
