#include <bits/stdc++.h>
using namespace std;

long long calculateGCD(long long a, long long b){
    if(a < b){
        return calculateGCD(b, a);
    }
    
    if(b == 0){
        return a;
    }
    
    return calculateGCD(b, a%b);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long a, b;
	    cin >> a>>b;
	    long long gcd = calculateGCD(a, b);
	    long long lcm = a/gcd * b;
	    cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}
