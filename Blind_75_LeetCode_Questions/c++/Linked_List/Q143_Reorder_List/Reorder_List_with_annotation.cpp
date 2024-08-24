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
        if ((!head) || !(head -> next) || !(head->next->next))
            return; // function type is void so it should be return, not return 0. return 0 is for int function to return 0

        ListNode* fast = head;
        ListNode* slow = head;

        while((fast -> next != nullptr) && (fast -> next -> next != nullptr))
        {
            slow = slow -> next; // 1 -> 2 -> 3 -> 4 -> nullptr, slow = 2
            fast = fast -> next -> next; // fast = 3
        }

        ListNode* secondHalf = slow -> next; // secondHalf = 3
        slow -> next = nullptr;     // slow -> nullptr = 1 -> 2 -> nullptr

        ListNode* prev = nullptr;   // prev = nullptr;
        while(secondHalf != nullptr)    // loop until secondHalf is nullptr
        {
            ListNode* temp = secondHalf -> next;    // 1st iteration *temp = 3 -> next , *temp = 4 // 2nd temp = nullptr
            secondHalf -> next = prev;              // secondHalf -> next = nullptr , 3 -> next = nullptr // 4 -> next = 3 
            prev = secondHalf;                      // prev = 3     // prev = 4
            secondHalf = temp;                      // secondHalf = 4 // secondHalf = nullptr , 4 -> 3 -> nullptr
        }        

        ListNode* firstHalf = head;     // firstHalf = 1
        ListNode* secondHalfHead = prev; // secondHalfHead = prev(4)
        while(secondHalfHead != nullptr)
        {
            ListNode* temp = secondHalfHead -> next; // *temp = sHH(4) -> next, *temp = 3 // *temp = sHH(3) -> next = nullptr
            secondHalfHead -> next = firstHalf -> next; // sHH(4) -> next = fH(1) -> next = 2, 4 -> 2 // sHH(3) -> next = fH(2) -> next, 3 -> nullptr
            firstHalf -> next = secondHalfHead; // fH(1) -> next = sHH , 1 -> next = 4, 1 -> 4 -> 2 -> nullptr // fH(2) -> next = sHH(3), 2 -> next = 3, 1 -> 4 -> 2 -> 3 -> -> nullptr
            firstHalf = secondHalfHead -> next; // fH(1) = sHH(4) -> next, fH = 2 // fH(2) = sHH(3) -> next, fH = nullptr
            secondHalfHead = temp;  // sHH = 3  // sHH(nullptr), while loop and code ends.
        }
    }
};
