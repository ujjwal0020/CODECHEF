#include <iostream>
using namespace std;

int profits(int x ,int y,int z){
    int d = x*y;
    int e = x*z;
    return e-d;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    std::cout << profits(x,y,z) << std::endl;
	}
	return 0;
}
