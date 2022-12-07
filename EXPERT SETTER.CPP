#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    cin>>a>>b;
	    c=(b*100)/a;
	    if(c>=50) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
