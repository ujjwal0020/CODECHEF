#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int n, x, y, total_people, carried_gold;
	    cin >> n >> x >> y;
	    total_people = n+1;
	    carried_gold = y * total_people;
	    if(carried_gold >= x){
	        cout << "YES" << "\n";
	    }
	    else if(carried_gold < x){
	        cout << "NO" << "\n";
	    }
	    
	}
	return 0;
}
