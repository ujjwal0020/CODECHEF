#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x,y,a,b,c;
	    cin>>x>>y>>a>>b>>c;
	    if(((x/a)>=c && (y/b)>=c)){
	     cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
