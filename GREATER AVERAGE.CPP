#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    float a,b,c;
	    cin>>a>>b>>c;
	    float d;
	    d=(a+b)/2;
	    if(d>c) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
