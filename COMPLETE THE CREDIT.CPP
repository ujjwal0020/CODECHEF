#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a;
	    cin>>a;
	    if(a>65) cout<<"overload"<<endl;
	    else if(a<35) cout<<"underload"<<endl;
	    else cout<<"normal"<<endl;
	}
	return 0;
}
