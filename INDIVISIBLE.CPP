#include <iostream>
using namespace std;

int main() {
	int a, b, c, t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    cin >> a >> b >> c;
	    for (int i = 1; i < 100; i++)
	    {
	        if ((a%i) && (b%i) && (c%i)){
	            cout << i << endl;
	            break;
	        }
	        else{
	            continue;
	        }   
	    }
	}
	return 0;
}
