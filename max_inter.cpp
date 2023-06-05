// Maximum Intersection POTD 4 April 2023
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxIntersections(vector<vector<int>> lines, int N)
    {
        // Code here
        for (int i = 0; i < lines.size(); i++)
        {
            for (int j = 0; j < lines[i].size(); j++)
                cout << lines[i][j] << " ";
            cout << endl;
        }
        map<int, int> mm;
        for (auto x : lines)
        {
            mm[x[0]]++;
            mm[x[1] + 1]--;
        }
        for (auto x : mm)
        {
            cout << "Key: " << x.first << ", Value: " << x.second << endl;
        }

        int ans = 1, total = 0;
        for (auto x : mm)
        {
            total += x.second;
            cout << ans << " " << total << " " << x.second << endl;
            ans = max(ans, total);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++)
        {
            for (int i = 0; i < N; i++)
            {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends