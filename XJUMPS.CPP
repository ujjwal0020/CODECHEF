#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++)
	{
	     int x,y;
	     cin>>x>>y;
	     int a=x/y;
	     int b=x%y;
	     int c=a+b;
	     cout<<c<<endl;

	}
	return 0;
}
