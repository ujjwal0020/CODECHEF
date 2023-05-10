#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n], j, x = 100000;
        string v;
        for (int i = 0; i < n; i++)
            cin >> s[i];

        cin >> v;
        for (int i = 0; i < v.length(); i++)
        {
            if (v[i] == '0')
            {
                j = s[i];
                x = min(x, j);
            }
        }
        cout << x << endl;
    }
    return 0;
}
