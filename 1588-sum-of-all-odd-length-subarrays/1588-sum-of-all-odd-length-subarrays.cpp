class Solution
{
    public:
        int jod_do(vector<int> &arr, int start, int end)
        {
            int sum = 0;
            for (int i = start; i <= end; i++)
            {
                sum += arr[i];
            }
            return sum;
        }
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int oddsum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i; j < arr.size(); j++)
            {

                if ((j - i + 1) % 2 != 0)
                {
                    oddsum += jod_do(arr, i, j);
                }
            }
        }

        return oddsum;
    }
};