#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int A,B,C,NUM;
        cin>>A>>B>>C;
        NUM=A+B+C;
        if (NUM>=100 && A>=10 && B>=10 && C>=10){
            cout<<"pass"<<endl;
            
        }
        else{
            cout<<"fail"<<endl;
        }
    }
	return 0;
}
