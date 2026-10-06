class Solution {
public:
    double myPow(double x, int n) 
    {
        // llabs safely handles -2147483648 and converts it to a positive long long
        long num = labs(n); 
        
        double result=1;
        while(num>0)
        {
            if(num%2==1)  
                result=result*x;
            x=x*x;
            num=num/2;    
        }
        if(n<0)
        {
            result=1/result;
        }
            return result;
    }
};