class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> sum(m+1, vector<int>(n+1, 0));

        for(int r = 1; r <=m ; r++){
            for(int c = 1; c <= n; c++){
                sum[r][c] = mat[r-1][c-1] + sum[r-1][c] + sum[r][c-1] - sum[r-1][c-1];
            }
        }

        vector<vector<int>> ans(m, vector<int> (n,0));

        for(int r = 0; r < m; r++){
            for(int c = 0; c < n; c++){

                int r1 = max(0, r-k);
                int c1 = max(0, c-k);
                int r2 = min(m-1, r+ k);
                int c2 = min(n-1, c+ k);

                // covert to 1 based indexing for prefix sum match
                r1++;
                c1++;
                c2++;
                r2++;

                ans[r][c] = sum[r2][c2] - sum[r2][c1-1] - sum[r1-1][c2] + sum[r1-1][c1-1];
            }
        }
        
        return ans;
    }
};