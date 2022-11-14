#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b,c;
	int d;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b>>c;
	    d=b+c*2;
	    if(d<=a) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
