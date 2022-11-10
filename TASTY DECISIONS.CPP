#include <iostream>
using namespace std;

int main() {
	    int t;
	    cin>>t;
	    int x,y;
	    for(int i=0;i<t;i++)
	    {
	       cin>>x>>y;
	       int a,b;
	       a=x*2;
	       b=y*5;
	       if(a>b) cout<<"Chocolate"<<endl;
	       else if(a<b) cout<<"Candy"<<endl;
	       else cout<<"Either"<<endl;
	    }
	return 0;
}
