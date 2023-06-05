//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findSum(int a[], int n)
    {
        // code here.
        int min = 0, max = 0;
        if (n == 1)
        {
            return 2 * a[0];
        }
        else if (a[0] > a[1])
        {
            min = a[1];
            max = a[0];
        }
        else
        {
            min = a[0];
            max = a[1];
        }
        for (int i = 2; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];

            else if (a[i] < min)
                min = a[i];
        }
        return min + max;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        int ans = ob.findSum(arr, n);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends