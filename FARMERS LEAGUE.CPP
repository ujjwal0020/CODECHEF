#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	  int nofteams;cin>>nofteams;
	  int highest_point=(nofteams-1)*3;
	  int second_highest=((nofteams-2)-((nofteams-2)/2));
	  cout<<highest_point-second_highest*3<<endl;
	}
	return 0;
}
