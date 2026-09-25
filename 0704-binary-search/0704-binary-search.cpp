class Solution {
public:
    int search(vector<int>& arr, int k) 
    {
        int n=arr.size();
        int start=0, end=n-1;
        int mid;
    
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            if(arr[mid]<k)
                start=mid+1;
            else
                end=mid-1;
        }
            return -1;
    }
};