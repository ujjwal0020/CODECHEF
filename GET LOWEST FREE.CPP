#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c;
        if(a>=b && c>=b){
	        cout<<a+c<<endl;
	    }
	    else if(b>=a && c>=a){
	        cout<<b+c<<endl;
	    }
	    else{
	        cout<<a+b<<endl;
	    }
    }
	return 0;
}
