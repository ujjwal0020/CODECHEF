#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >>t;
	while(t--)
	{
	    int x;
	    std::cin >>x ;
	    std::cout << (x<=10?"Yes":"No") << std::endl;
	}
	return 0;
}
