#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		int avg=(x+y)/2;
		cout<<max(abs(x-avg),abs(y-avg))<<endl;
	}
}

