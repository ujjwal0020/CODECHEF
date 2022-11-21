#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    c=a*100;
	    d=b*10;
	    if(c>d) cout<<"cloth"<<endl;
	    else if(d>c) cout<<"Disposable"<<endl;
	    else cout<<"cloth"<<endl;
	}
	return 0;
}
