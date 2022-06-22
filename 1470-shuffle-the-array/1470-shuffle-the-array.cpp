class Solution
{
    public:
        vector<int> shuffle(vector<int> &nums, int n)
        {
            int i = 0, j = n, k = 0;
            vector<int> shuffledArr;
            while (i < n && j < (2*n) && k < 2 *n)
            {
                shuffledArr.push_back(nums[i]);
                shuffledArr.push_back(nums[j]);
                i++;
                j++;
                k += 2;
            }
            return shuffledArr;
        }
};