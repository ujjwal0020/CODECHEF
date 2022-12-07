#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x,y,z;
      cin>>x>>y>>z;
      if(x%y == 0)
      {
          int r;
          r=z*(x/y);
          cout<<r<<endl;
      }
      else
      {   int a;
          a=x/y;
          cout<<(a+1)*z<<endl;
      }
	}
	return 0;
}
