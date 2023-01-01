#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int e,f;
	    e=c/a;
	    f=d/b;
	    if(e<f) cout<<"-1"<<endl;
	    else if(e>f) cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
