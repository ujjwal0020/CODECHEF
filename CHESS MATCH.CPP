#include <iostream>
using namespace std;

int chess(int n,int a,int b){
    int c=2*(180+n);
    int d=a+b;
    int e=c-d;
    
    return e;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    std::cout << chess(n,a,b) << std::endl;
	}
	return 0;
}
