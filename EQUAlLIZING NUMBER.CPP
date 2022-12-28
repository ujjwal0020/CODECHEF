#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x,y;
	    cin>>x>>y;
	    if(((x%2 ==0) and (y%2==0)) or ((x%2 ==1) and (y%2 ==1)) )
	    cout << "yes" << endl;
	    else
	    cout << "NO" << endl;
	}
	return 0;
}
