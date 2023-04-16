#include <iostream>
using namespace std;

int in_array(int *arr,int size,int element){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i] == element){j++;break;}
    }
    return j;
}// returns 1 if element in array



int main() {
    int t;
    cin>>t;
    int n;
    
    while(t--){
        cin>>n;
        int holiday=0,arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        for (int i=1;i<31;i++){
            if( in_array(arr,n,i) || i%7 == 6 || i%7==0){holiday++;}
        }
        cout<<holiday<<endl;
    }
	return 0;
}
