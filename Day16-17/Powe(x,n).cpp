class Solution {
public:
    double myPow(double x, int n) {
    //     if (n == 0)
    //     return 1;
  
    // if (n < 0)
    //     return 1 / myPow(x, -n);
  
    // return x * myPow(x, n - 1);
    return pow(x, n);
    }
};