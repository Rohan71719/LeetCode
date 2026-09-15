class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int max_num=*max_element(nums.begin(), nums.end());
        int start=1, end=max_num;
        int n=nums.size();

        while(start<=end)
        {
            int sum=0;
            int mid=start+(end-start)/2;
            for (int i=0;i<n;i++)
            {
                sum+=ceil((double)nums[i]/mid);
                if(sum>threshold)
                    break;
            }
            if(sum<=threshold)
                end=mid-1;
            else
                start=mid+1;    
        }    
            return start;
    }
};