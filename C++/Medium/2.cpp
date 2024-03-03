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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto l3 = new ListNode(0);
        auto travel = l3;
        int l1Value, l2Value, sum, carry=0, digit;

        while(l1 || l2 || carry != 0) {
            l1Value = (l1) ? l1->val : 0;
            l2Value = (l2) ? l2->val : 0;

            sum = l1Value + l2Value + carry;
            digit = sum % 10;
            carry = sum / 10;

            auto newNode = new ListNode(digit);
            travel->next = newNode;
            travel = travel->next;

            l1 = (l1) ? l1->next : NULL;
            l2 = (l2) ? l2->next : NULL;
        }

        return l3->next;
    }
};