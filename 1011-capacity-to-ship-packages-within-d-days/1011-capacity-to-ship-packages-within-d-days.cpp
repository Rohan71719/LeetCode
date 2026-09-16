class Solution {
public:
    int shipWithinDays(vector<int>& weight, int days) 
    {
        int maxweight=-1, totalweight=0;
        for(int i=0;i<weight.size();i++)
        {
            maxweight=max(weight[i],maxweight);
            totalweight+=weight[i];
        }    
        int left=maxweight;
        int right=totalweight;
        while(maxweight<totalweight)
        {
           int midweight= maxweight+(totalweight-maxweight)/2;
            int currweight=0,daysneeded=1;
            for(int i=0;i<weight.size();i++)
            {
            if(currweight+weight[i]>midweight)
            {
                daysneeded++;
                currweight=0;
            }
                currweight+=weight[i];
            }    
            if(daysneeded>days)
            {
                maxweight=midweight+1;
            }
            else
                totalweight=midweight;
            
        }
            return maxweight;
    }
};