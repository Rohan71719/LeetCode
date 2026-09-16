class Solution {
public:
    vector<int> findPeaks(vector<int>& arr) 
    {
        vector<int> res;
        for(int i=1;i<=arr.size()-2;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                res.push_back(i);
        }
            return res;
    }
};