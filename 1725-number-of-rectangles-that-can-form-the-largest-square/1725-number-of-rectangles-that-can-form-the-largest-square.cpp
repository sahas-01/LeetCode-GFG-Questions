class Solution
{
    public:
        int countGoodRectangles(vector<vector < int>> &rectangles)
        {
            vector<int> v;
            int maxLen, maxct = 0;
            for (int i = 0; i < rectangles.size(); i++)
            {
                maxLen = rectangles[i][0];
                for (int j = 0; j < rectangles[i].size(); j++)
                {

                    if (maxLen > rectangles[i][j])
                    {
                        maxLen = rectangles[i][j];
                    }
                }
                v.push_back(maxLen);
            }
            int maxi = 0, res = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] > maxi)
                {
                    maxi = v[i];
                    res = 1;
                }
                else if (v[i] == maxi)
                {
                    res++;
                }
            }
            return res;
        }
};