#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(b<=1.07*a) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
