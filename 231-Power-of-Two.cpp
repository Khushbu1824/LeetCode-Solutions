//Using in-built-function
class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        for(int i = 0; i < 31; i++)
        {
            if(n == pow(2, i))
            {
                return true;
            }
        }

        return false;
    }
};

//Using Bit-manipulation
class Solution2 {
public:
    bool isPowerOfTwo(int n)
    {
        if(n <= 0)
        {
            return false;
        }
        
        int count = 0;

        while(n)
        {
            if(n & 1)
            {
                count++;
            }

            n = n >> 1;
        }

        if(count == 1)
        {
            return true;
        }

        return false;
    }
};

//Simple approach
class Solution3 {
public:
    bool isPowerOfTwo(int n)
    {
        int ans = 1;

        for(int i = 0; i < 31; i++)
        {
            if(ans == n)
            {
                return true;
            }

            if(ans < INT_MAX / 2)
            {
                ans = ans * 2;
            }
        }

        return false;
    }
};
