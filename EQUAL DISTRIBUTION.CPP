#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b;
	    int s;
	    s=a+b;
	    if(s%2==0)
	    cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
