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
ListNode* insertionSortList(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode *newHead = new ListNode(head->val);
    ListNode *tail = newHead;
    head =  head->next;
    while(head) {
        ListNode *newNode = new ListNode(head->val);
        //If head value is less than the head
        if (head->val < newHead->val) {
            newNode->next = newHead;
            newHead = newNode;
        } 
        //Else if head value is more than head
        else {
            ListNode *dummyNode = newHead;
            while(dummyNode->next && head->val > dummyNode->next->val) 
                dummyNode = dummyNode->next;
            newNode->next = dummyNode->next;
            dummyNode->next = newNode;
            if(!dummyNode->next)
                tail = newNode;
        }
        head = head->next;
    }

    return newHead;
}
};