#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int x,y;
        cin>>x>>y;
        if (y>x && y<=100 && x<=100)
        cout<<x + (y-x)*2<<endl ;
        else if (x>=y && x<=100 && y<=100)
        cout<<y<<endl;
        
        
        
        
    }
	// your code goes here
	return 0;
}
