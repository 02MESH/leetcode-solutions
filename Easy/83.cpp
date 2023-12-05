ListNode* deleteDuplicates(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode* travelNode(nullptr);
    auto node = head;
    while(node) {
        if(travelNode && travelNode->val == node->val) {
            travelNode->next = nullptr;
            travelNode->next = node->next;
        }
        else {
            travelNode = node;
        }
        node = node->next;
    }
    return head;
}
