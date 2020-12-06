/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int lenA = 0;
        int lenB = 0;

        auto p = headA;
        while (p != nullptr)
        {
            p = p->next;
            lenA++;
        }
        p = headB;
        while (p != nullptr)
        {
            p = p->next;
            lenB++;
        }
        if (lenA > lenB)
        {
            for (int i = 0; i < lenA - lenB; i++)
                headA = headA->next;
        }
        if (lenB > lenA)
        {
            for (int i = 0; i < lenB - lenA; i++)
                headB = headB->next;
        }
        while (headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};