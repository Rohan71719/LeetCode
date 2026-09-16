class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) 
    {
       int m=mat.size();
       int n=mat[0].size();
       int start=0, end=n-1;

        while(start<m && end>=0)
        {
            int leftval = (end - 1 >= 0) ? mat[start][end-1] : -1;
            int rightval = (end + 1 < n) ? mat[start][end+1] : -1;
            int upval = (start - 1 >= 0) ? mat[start-1][end] : -1;
            int downval = (start + 1 < m) ? mat[start+1][end] : -1;

            if(mat[start][end]>leftval && mat[start][end]>rightval && mat[start][end]>upval && mat[start][end]>downval)
            {
                return {start,end};
            }
            else if(leftval>mat[start][end])
                end--;
            else if(rightval>mat[start][end])
                end++;  
            else if(upval>mat[start][end])
                start--;
            else 
                start++;      
        }     
            return {-1,-1};
    }
};