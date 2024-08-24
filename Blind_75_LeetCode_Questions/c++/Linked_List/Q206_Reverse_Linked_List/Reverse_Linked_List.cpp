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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* dummy = new ListNode();
        ListNode* current = head;

        while(current != nullptr)
        {
            ListNode* nextNode = current -> next;
            current -> next = dummy -> next;
            dummy -> next = current;
            current = nextNode;
        }
        return dummy -> next;

        
    }
};


