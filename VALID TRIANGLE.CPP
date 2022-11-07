#include <iostream>
using namespace std;

int main() {
	int t,s;
	cin>>t;
	int a,b,c;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b>>c;
	    if(a==0 || b==0 || c==0 || b+c+a!=180)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
