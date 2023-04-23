#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,hcf;
		cin>>n>>m;
		int M=max(n,m);
		for(int i=1;i<=M/2;++i){
			if((n%i)==0 && (m%i)==0){
				hcf=i;
			}
		}
		cout<<(n/hcf)*(m/hcf)<<"\n";

	}
	
	return 0;
}
