ListNode* deleteDuplicates(ListNode* head) {
    if(!head || !head->next) return head;
    auto *fast = head;
    ListNode *slow = NULL;
    while(fast) {
        if(fast->next && fast->next->val == fast->val) {
            int value = fast->val;
            while(fast->next && fast->val == value)
                fast = fast->next;
            if(!slow)
                head = fast;
            else
                slow->next = fast;
            continue;
        }
        slow = fast;
        fast = fast->next;
    }
    return head;
}