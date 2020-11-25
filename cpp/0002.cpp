/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *res = new ListNode(0);
        ListNode *head = res;
        while (l1 != nullptr or l2 != nullptr)
        {
            int current = carry;
            carry = 0;
            if (l1 != nullptr)
            {
                current += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                current += l2->val;
                l2 = l2->next;
            }
            if (current >= 10)
            {
                current = current % 10;
                carry += 1;
            }
            res->next = new ListNode(current);
            res = res->next;
        }
        if (carry)
        {
            res->next = new ListNode(1);
        }
        return head->next;
    }
};