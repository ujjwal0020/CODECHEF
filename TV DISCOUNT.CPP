#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d;
	    e=a-c;
	    f=b-d;
	    if(e<f) cout<<"first"<<endl;
	    else if(e>f) cout<<"second"<<endl;
	    else cout<<"any"<<endl;
	    
	}
	return 0;
}
