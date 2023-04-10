#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    long long int q=1;
		for(int i=1;i<k;i++)
		{
		    q=q*(n-k+i)/i;		
		}
		cout<<q<<endl;
	}
	return 0;
}
