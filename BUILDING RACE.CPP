#include <iostream>
using namespace std;

int main() {
	int t;
	float a,b,x,y;
	cin >>t;
	while(t--){
	    cin >>a>>b>>x>>y;
	    if((a/x) > (b/y))
	    cout <<"Chefina"<<endl;
	    	    else if((a/x)==(b/y))
	    cout <<"Both"<<endl;
	    else 
	    cout <<"Chef"<<endl;
	}
	return 0;
}
