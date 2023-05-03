#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--){
	    int i, n, a, b;
	    int f, x = 0, y = 0;
	    cin >> n >> a >> b;
	    for (i = 0; i < n; i++){
	        cin >> f;
	        if (f == a){
	            x++;
	        }
	        if (f == b){
	            y++;
	        }
	    }
	    printf("%.10f\n", (double) (x * y) / (n * n));
	}
	return 0;
}
