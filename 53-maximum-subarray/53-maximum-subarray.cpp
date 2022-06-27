class Solution
{
    public:
        int maxSubArray(vector<int> &nums)
        {
            int maxsum = INT_MIN;
            int sum = 0;
            vector<int> v;
            for (int i = 0; i < nums.size(); i++)
            {
                sum += nums[i];
                sum = max(sum, nums[i]);
                maxsum = max(sum, maxsum);
            }
            return maxsum;
        }
};