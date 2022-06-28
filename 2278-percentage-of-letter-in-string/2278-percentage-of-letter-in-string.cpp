class Solution
{
    public:
        int percentageLetter(string s, char letter)
        {
            int lettercount = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == letter)
                {
                    lettercount++;
                }
            }
            lettercount = (lettercount *100 / s.length());
            return lettercount;
        }
};