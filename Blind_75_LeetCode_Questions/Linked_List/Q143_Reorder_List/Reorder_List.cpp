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
    void reorderList(ListNode* head) 
    {
        if (!head || !(head -> next) || !(head -> next -> next)) 
            return;

        ListNode* first = head;
        ListNode* last = head;

        while((first != nullptr) && (first -> next != nullptr))
        {
            last = last -> next;
            first = first -> next -> next; 
        }

        ListNode* half = last -> next; 
        last -> next = nullptr;

        ListNode* prev = nullptr;
        while(half != nullptr)
        {
            ListNode* temp = half -> next;
            half -> next = prev;
            prev = half;
            half = temp;
        }

        ListNode* firstHalf = head;
        ListNode* secondHalfHead = prev;
        while(secondHalfHead != nullptr)
        {
            ListNode* temp = secondHalfHead -> next;
            secondHalfHead -> next = firstHalf -> next;
            firstHalf -> next = secondHalfHead;
            firstHalf = secondHalfHead -> next;
            secondHalfHead = temp;  
        }

    }
};
