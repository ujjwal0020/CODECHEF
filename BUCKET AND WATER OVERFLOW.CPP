#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d;
	    e=(c*d)+a;
	    if(e>b) cout<<"overflow"<<endl;
	    else if(e==b)cout<<"filled"<<endl;
	    else cout<<"unfilled"<<endl;
	}
	return 0;
}
