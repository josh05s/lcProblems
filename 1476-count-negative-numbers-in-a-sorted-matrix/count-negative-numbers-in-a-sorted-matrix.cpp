class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0, s = grid.size(), p = grid[0].size();

        for (int m = 0; m < s; m++) 
        {
            for (int n = 0; n < p; n++) 
            {
                if (grid[m][n] < 0)
                {
                    count += 1;
                }
            }
        }

        return count;
    }
};