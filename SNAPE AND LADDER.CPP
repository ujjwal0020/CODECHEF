#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,b,ls;
	cin>>t;
	while(t--)
	{
	    cin>>b>>ls;
	    cout.setf(ios::fixed);
		cout<<setprecision(2)<<sqrt(abs(b*b - ls*ls))<<" "<<sqrt(b*b + ls*ls)<<"\n";
	}
	return 0;
}
