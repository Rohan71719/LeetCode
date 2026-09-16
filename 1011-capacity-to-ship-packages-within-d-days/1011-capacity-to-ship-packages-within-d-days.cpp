class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) 
    {
          int n=arr.size();
        int start=0, end,mid,ans=0;
        
        for(int i=0;i<n;i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        while(start<=end)
        {
           
            mid=end-(end-start)/2;
            int currweight=0, daysneeded=1;
            for(int i=0;i<n;i++)
            {
                currweight+=arr[i];
                if(currweight>mid)
                {
                    daysneeded++;
                    currweight=arr[i];
                }
                    
            }
            
            if(daysneeded>days)
                start=mid+1;
            else{
                    ans=mid;
                    end=mid-1;
                }    
        }
            return ans;
    }
};