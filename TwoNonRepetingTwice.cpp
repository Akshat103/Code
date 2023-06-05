//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        // Code here.
        vector<int> ans;

        int XOR = 0;
        // get XOR of all ele
        // XOR is XOR of 2 non repeating numbers
        for (int i = 0; i < nums.size(); i++)
            XOR = XOR ^ nums[i];

        // get the right most set bit of XOR
        // it will act as mask for each ele
        int RXOR = XOR & ~(XOR - 1);

        // contain set bit at LSB
        vector<int> set1;
        // contain reset bit at LSB
        vector<int> set2;

        // divide arr on basis on LSB
        for (int i = 0; i < nums.size(); i++)
        {
            if (RXOR & nums[i])
                set1.push_back(nums[i]);
            else
                set2.push_back(nums[i]);
        }

        int TXOR = 0;
        // get non repeatinh ele in set1
        for (int i = 0; i < set1.size(); i++)
        {
            TXOR = TXOR ^ set1[i];
        }
        TXOR = XOR ^ TXOR;
        ans.push_back(TXOR);

        TXOR = 0;
        // get non repeatinh ele in set2
        for (int i = 0; i < set2.size(); i++)
        {
            TXOR = TXOR ^ set2[i];
        }
        TXOR = XOR ^ TXOR;
        ans.push_back(TXOR);

        sort(ans.begin(), ans.end());

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n + 2);
        for (int i = 0; i < 2 * n + 2; i++)
            cin >> v[i];
        Solution ob;
        vector<int> ans = ob.singleNumber(v);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends