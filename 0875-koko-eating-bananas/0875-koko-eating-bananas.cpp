class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int k) 
    {
          int n=arr.size();
        int start=0, end=n-1;
        int mid,ans;
        long long sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            end=max(arr[i],end);
        }
        start=sum/k;
        if(start==0)    start=1;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int total_time=0;
            for(int i=0;i<n;i++)
            {
                total_time+=arr[i]/mid;
                if(arr[i]%mid)
                    total_time++;
            }
                if(total_time>k)
                {
                    start=mid+1;
                }
                else{
                        ans=mid;
                        end=mid-1;
                }
        }       
            return ans;
                
    }
};