#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c) cout<<"setter"<<endl;
	    else if(b>a && b>c) cout<<"tester"<<endl;
	    else cout<<"editorialist"<<endl;
	}
	return 0;
}
