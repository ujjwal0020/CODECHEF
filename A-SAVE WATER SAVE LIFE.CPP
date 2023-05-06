#include <iostream>
using namespace std;

int main() {
	int T,H,x,y,C;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>H>>x>>y>>C;
        if(C>=(x+(y/2))*H)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
	return 0;
}

