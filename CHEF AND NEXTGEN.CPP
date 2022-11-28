#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int b,c,d,e;
	    cin>>b>>c>>d>>e;
	    int f,g;
	    f=b*c;
	    g=d*e;
	    if(g>=f)cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
