class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while(n)
        {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n = n / 10;
        }

        int result = product - sum;

        return result;
    }
};
