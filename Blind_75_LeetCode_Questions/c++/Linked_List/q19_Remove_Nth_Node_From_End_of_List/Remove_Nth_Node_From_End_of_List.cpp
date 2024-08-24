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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* dummyNode = new ListNode(0);
        dummyNode -> next = head;
        ListNode* fast = dummyNode;
        ListNode* slow = dummyNode;

        for(int i = 0; i < n; ++i)
        {
            fast = fast -> next; 
        }

        while(fast -> next != nullptr)
        {
            slow = slow -> next;
            fast = fast -> next;
        }

        slow -> next = slow -> next -> next;

        ListNode* newHead = dummyNode -> next;
        delete dummyNode;
        return newHead;      
    }
};
