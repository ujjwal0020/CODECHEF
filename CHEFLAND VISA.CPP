#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int A,B,C,D,E,F;
	    cin>>A>>B>>C>>D>>E>>F;
	    if((B>=A) && (D>=C) && (E>=F)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
