class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1, sum = 0;
        int x = n;
        while (n != 0)
        {
        int d = n % 10;
        sum += d;
        prod *= d;
        n /= 10;
        }

    int diff = prod - sum;
    return diff;
    }
};