#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    float s;
    float h,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        if(s<1500){
            h=0.1*s;
            d=0.9*s;}
        else{
            h=500;
            d=0.98*s;
        }
        cout<<fixed<<setprecision(2)<<s+h+d<<endl;
    }
	// your code goes here
	return 0;
}
