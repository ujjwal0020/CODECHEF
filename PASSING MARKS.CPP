#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a_min,b_min,c_min,tmin,a,b,c;
	    cin>>a_min>>b_min>>c_min>>tmin>>a>>b>>c;
	     if(a_min <= a && b_min <= b && c_min <= c && tmin <= a+b+c){
	        cout << "YES" << "\n";
	    }
	    else{
	        cout << "NO" << "\n";
	    }
	}
	return 0;
}
