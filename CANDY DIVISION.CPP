#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	std::cin >> t;
	while(t--)
	{
	    std::cin >> n;
	    std::cout << (n%3==0?"YES":"NO") << std::endl;
	}
	return 0;
}
