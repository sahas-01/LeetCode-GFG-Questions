class Solution
{
    public:
        string defangIPaddr(string address)
        {
            
            for (int i = 0; i < address.size(); i++)
            {
                if (address[i] == '.')
                {
                    address[i] = '[';
                    address.insert(i + 1, ".]");
                    i = i + 2;
                }
            }

            return address;
        }
    // for (int i = 0; i < address.size(); i++)
    // {
    //     if (address[i] == '.')
    //     {
    //         address[i] = '[';
    //         address.insert(i + 1, ".]");
    //         i = i + 2;
    //     }
    // }
    // return address;
};