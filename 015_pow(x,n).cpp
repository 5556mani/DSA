class Solution {
public:
    double myPow(double x, int n) {

        double input = x;
        long long power = n;

        if(n<0){
            input=1/input;
            power=(-1.0*n);
        }

        double ans=1;

        while(power>0){
            if(power%2==1){
                ans*=input;
            }
            input*=input;
            power=power/2;
        }
        return ans;
    
        
    }
};