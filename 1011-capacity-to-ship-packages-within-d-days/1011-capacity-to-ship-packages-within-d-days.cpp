class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) 
    {
       int n=arr.size();
        
        
        int start=0,end=0,mid,ans;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>start)
            start=arr[i];
            end+=arr[i];
        }
        
        while(start<=end)
        {
            mid=end-(end-start)/2;
            int pages=0,count=1;
            for(int i=0;i<n;i++)
            {
                pages+=arr[i];
                if(pages>mid)
                {
                    count++;
                    pages=arr[i];
                }
            }
            if(count<=days)
            {
                ans=mid;
                end=mid-1;
            }
            else 
             start=mid+1;
        }
        return ans;
    }
};