#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,b;
	std::cin >>t;
	while(t--)
	{
	  std::cin >> n>>a>>b;
	  int matchTime=0;
	  while(n>1) {
	      /* code */
	      n/=2;
	      matchTime=matchTime+a+b;
	  }
	  std::cout << matchTime-b << std::endl;
	}
	
	return 0;
}
