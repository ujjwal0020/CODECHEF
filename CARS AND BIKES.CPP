#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a;
	    cin>>a;
	    int d;
	    d=a%4;
	    if(d>=2)cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
