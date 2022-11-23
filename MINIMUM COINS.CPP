#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x,b;
	    cin>>x;if(x>=10){
	    b=x/10;
	    int c;
	    c=b*10;
	    cout<<x-c<<endl;
	    }
	    else cout<<x<<endl;
	}
	return 0;
}
