#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	string a,b;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b;
	   for(int i=0;i<5;i++)
	   {
	       if(a[i]==b[i]) cout<<"g";
	       else cout<<"b";
	   }
	   cout<<endl;
	}
	return 0;
}
