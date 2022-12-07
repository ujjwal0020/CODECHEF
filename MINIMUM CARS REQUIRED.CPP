#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int a, n;
        cin >> a;
        if (a < 4)
        {
            cout << "1" << endl;
        }
        else if (a % 4 == 0)
        {
            n = a / 4;
            cout << n << endl;
        }
        else
        {
            n = a / 4;
            cout << n+1 << endl;
        }
    }

    return 0;
}
