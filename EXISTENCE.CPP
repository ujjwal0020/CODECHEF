#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int x,y;
	    cin>>x>>y;
	    if(x*x==2*y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	   // int a=pow(x,4);
	   // int b=pow(y,2);
	   // int c=pow(x,2);
	   // long long int lhs=a+4*b;
	   // long long int rhs=4*y*c;
	   // //cout<<"lhs "<<lhs<<" rhs "<<rhs<<endl;
	   // if(lhs==rhs){
	   //     cout<<"yes"<<endl;
	   // }
	   // else{
	   //     cout<<"no"<<endl;
	   // }
	}
	return 0;
}
