#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int d;
	    d=a*b;
	    if(d<=c) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
