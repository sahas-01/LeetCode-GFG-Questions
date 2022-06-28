class Solution
{
    public:
        string truncateSentence(string s, int k)
        {
            string newstr = "";
            int count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == ' ')
                {
                    count++;
                }
                if (count == k)
                {
                    break;
                }
                newstr += s[i];
            }
            return newstr;
        }
};