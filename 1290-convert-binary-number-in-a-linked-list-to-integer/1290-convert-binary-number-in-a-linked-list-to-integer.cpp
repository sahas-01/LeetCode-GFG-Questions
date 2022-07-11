/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int getDecimalValue(ListNode *head)
        {
           	//Traversing the linked list
            vector<int> a;
            int sum = 0;
            while (head != NULL)
            {
                a.push_back(head->val);
                head = head->next;
            }
            reverse(a.begin(), a.end());
            for (int i = 0;i<a.size();i++)
            {
                // cout << a[i] << " ";
                sum += a[i] *pow(2, i);
            }
            return sum;
        }
};