#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      int x,y;
      cin>>x>>y;
      int count=x+y;
      if(count%2==0) cout<<"janmansh"<<endl;
      else cout<<"jay"<<endl;
  }
	return 0;
}
