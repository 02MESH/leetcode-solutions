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
        if(!head->next) return head;
        ListNode *newHead = new ListNode(head->val);
        ListNode *tail = newHead;
        head = head->next;
        while(head) {
            auto *newNode = new ListNode(head->val);
            if(head->val < newHead->val) {
                newNode->next = newHead;
                newHead = newNode;
            } else if(head->val > tail->val) {
                tail->next = newNode;
                tail = newNode;
            } else {
                auto *temp = newHead;
                while(temp->next && temp->next->val < newNode->val)
                    temp = temp->next;
                newNode->next = temp->next;
                temp->next = newNode;
            }
            head = head->next;
        }
        return newHead;
    }
};