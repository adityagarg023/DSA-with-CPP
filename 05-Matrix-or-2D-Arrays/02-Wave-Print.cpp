#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // This vector will store the final wave pattern
    vector<int> ans;

    // Traverse through each column
    for (int col = 0; col < mCols; col++)
    {
        // For even indexed columns (0, 2, 4,...), move top to bottom
        if (col % 2 == 0)
        {
            for (int row = 0; row < nRows; row++)
                ans.push_back(arr[row][col]);  // Add elements top to bottom
        }
        // For odd indexed columns (1, 3, 5,...), move bottom to top
        else
        {
            for (int row = nRows - 1; row >= 0; row--)
                ans.push_back(arr[row][col]);  // Add elements bottom to top
        }
    }

    // Return the result after processing all columns
    return ans;
}
