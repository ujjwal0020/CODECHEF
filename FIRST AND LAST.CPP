#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n], j;
	    for(j=0; j<n; j++)
	     cin>>a[j];
	     
	    int maxsum[n], sum=0;
	    for(j=0; j<n-1; j++)
	     {
	         sum = a[j] + a[j+1];
	         maxsum[j] = sum;
	     }
	     maxsum[n-1] = a[0] + a[n-1];
	     sort(maxsum, maxsum+n);
	     
	     cout<<maxsum[n-1]<<endl;
	}
	return 0;
}
