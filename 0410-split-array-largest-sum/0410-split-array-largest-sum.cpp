class Solution {
public:
    int splitArray(vector<int>& arr, int k) 
    {
         int n=arr.size();
        if(k>n) return -1;
        long long start=0;
        long long end=0,mid,sum=0;
        long long ans;
        
            for(int i=0;i<n;i++)
            {
                start=max(start,(long long)arr[i]);
                sum+=arr[i];
            }
                end=sum;
            while(start<=end)
            {
                mid= end-(end-start)/2;
                long long pages=0, count=1;
                for(int i=0;i<n;i++)
                {
                    
                    if(pages+arr[i]>mid)
                    {
                        count++;
                        pages=arr[i];
                    }
                    else
                        pages+=arr[i];
                }
                    if(count<=k)
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