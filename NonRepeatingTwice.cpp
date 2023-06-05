#include <bits\stdc++.h>
using namespace std;

int main()
{

    vector<int> arr;
    int s;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    int res = 0;
    for (int i = 0; i < s; i++)
    {
        res = res ^ arr[i];
    }

    cout << res;

    return 0;
}