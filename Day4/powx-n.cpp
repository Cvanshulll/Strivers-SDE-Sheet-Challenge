class Solution {
public:
    double myPow(double x, int n) {
        // return pow(x,n);

        //  TC: O(logN)
        long long nn= n;  // Making (-n) +ve will overflow So, taking long long
        if(n<0) nn =-1*nn;
        double ans=1.0;
        while(nn){
            if(nn%2){
                ans = ans*x;
                nn = nn-1;
            }
            else{
                x= x*x;
                nn = nn/2;
            }
        }
        if(n<0){
            ans = double(1.0)/double(ans);
        }
        return ans;
    }
};
