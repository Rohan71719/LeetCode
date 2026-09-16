class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
    int m=matrix.size();        //rows
    int n=matrix[0].size();
    int start=0, end=(n*m)-1;

    while(start<=end)
    {
        int mid=end-(end-start)/2;
        int row_index=mid/n;
        int col_index=mid%n;

        if(matrix[row_index][col_index]==target)
            return 1;
        else if(matrix[row_index][col_index]<target)
            start=mid+1;
        else
            end=mid-1;        
    }
        return 0;
    }
    
};