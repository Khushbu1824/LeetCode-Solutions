class Solution {
public:
    int reverse(int x) {
        long long number = 0;

        while(x)
        {
            number = number * 10 + (x % 10);
            x = x / 10;
        }

        if(number < INT_MIN || number > INT_MAX)
        {
            number = 0;
        }

        return number;
    }
};
