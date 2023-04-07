#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n,vote_age,ppl_age,count=0;
	    std::cin >> n>>vote_age;
	    for (int i = 0; i < n; i++) {
	        /* code */
	        std::cin >> ppl_age;
	        if(ppl_age>=vote_age)  count++;
	    }
	    std::cout << count << std::endl;
	}
	return 0;
}
