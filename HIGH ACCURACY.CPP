#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
 cin >> t;

 for(int i=0;i<t;i++){

  int n;
  cin >> n;

  int x = ceil( (float) n / 3);

  cout << x * 3 - n << endl;
 }

	return 0;
}
