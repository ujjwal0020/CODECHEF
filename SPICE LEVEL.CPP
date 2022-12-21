#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a;
	    cin>>a;
	    if(a>=4&&a<7) cout<<"medium"<<endl;
	    else if(a>=7) cout<<"hot"<<endl;
	    else cout<<"mild"<<endl;
	}
	return 0;
}
