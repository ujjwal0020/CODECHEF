#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,n,t;
	cin>>t;
	while(t--)
	{
	  cin>>n;
	  int a[n],count=0;
	  for(i=0;i<n;i++)
	  {
	     cin>>a[i];
	  }
	   for(i=1;i<n;i++)
	  {
	    if(a[i-1]==a[i])
	    count++;
	  }
	  cout<<n-count<<endl;
	  
	}
	return 0;
}
