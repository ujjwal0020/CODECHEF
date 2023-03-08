#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	int a[100];
	int b[100];
	cin>>t;
	for(int i=0;i<t;i++)
	{
	   cin>>n>>x;
	   int sum =0;
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i]; 
	   }
	   for(int j=0;j<n;j++)
	   {
	       cin>>b[j];
	       if(a[j]>=x)
	       {
	            sum = sum + b[j];
	       }
	   }
	   cout<<sum<<endl;
	   
	}
	return 0;
}
