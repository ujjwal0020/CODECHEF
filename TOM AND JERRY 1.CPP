#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    int s=abs(d-b)+abs(c-a);
    if(k==s){
    cout<<"Yes"<<endl;    
    }
    else if (k<s){
        cout<<"No"<<endl;
    }
    else if (k>s && (k-s)%2==0){
      cout<<"Yes"<<endl;  
    } 
    else{
      cout<<"No"<<endl;  
    } 


}
	return 0;
}
