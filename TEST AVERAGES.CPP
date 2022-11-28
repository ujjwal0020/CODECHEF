#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c;
	    int e,f;
	    d=(a+b)/2;
	    e=(b+c)/2;
	    f=(a+c)/2;
	    if(d>=35&&e>=35&&f>=35)cout<<"pass"<<endl;
	    else cout<<"fail"<<endl;
	}
	return 0;
}
