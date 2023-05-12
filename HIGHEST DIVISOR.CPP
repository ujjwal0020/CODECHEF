#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num,maxer;
	std::cin >> num;
	for (int i = 1; i <=10; i++) {
	    /* code */
	    if(num%i==0)
	    {
	        maxer=i;
	    }
	}
	std::cout << maxer << std::endl;
	return 0;
}
