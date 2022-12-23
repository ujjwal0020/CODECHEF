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
	   e=max(a,b);
	   f=max(c,d);
	   if(e>f) cout<<"q"<<endl;
	   else if(f>e) cout<<"p"<<endl;
	   else cout<<"tie"<<endl;
	}
	return 0;
}
