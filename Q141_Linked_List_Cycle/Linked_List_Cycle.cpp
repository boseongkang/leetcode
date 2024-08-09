/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode* slowNode = head;
        ListNode* fastNode = head;

        while((fastNode != nullptr) && (fastNode -> next != nullptr))
        {
            slowNode = slowNode -> next;
            fastNode = fastNode -> next -> next;
            if(slowNode == fastNode)
                return true;
        }
        return false; 

    }
};
