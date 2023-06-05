#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rv = 0;
    while (n)
    {
        int r = n % 10;
        rv = (rv * 10) + r;
        n = n / 10;
    }
    cout << rv;
    return 0;
}