class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> res;
        for(int i=0;i<nums1.size();i++)
            res.push_back(nums1[i]);

        for(int i=0;i<nums2.size();i++)
            res.push_back(nums2[i]);    

        sort(res.begin(),res.end());
        
        int n=res.size();
        float median;

        if(n%2==1)
            median=res[n/2];
        else
           median = (double)((res[(n / 2) - 1] + res[n / 2]) / 2.0);

        return median;      
    }
        
};