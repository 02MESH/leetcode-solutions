//Floyds hare and tortoise algorithm
ListNode *detectCycle(ListNode *head) {
    if(!head || !head->next) return nullptr;
    auto *fast = head;
    auto *slow = head;
    do {
        slow = slow->next;
        fast = fast->next;
        fast = (fast->next) ? fast->next : nullptr;
    } while(fast != slow && fast && slow);
    //If the nodes were for example (->1->2->3->4->(2i.e. back to 2))
    //Both the nodes will be pointing at 4, so we move the nodes step-by-step
    //They will eventually reach the point where both the cycle starts
    if(fast==slow){
        slow = head;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    return nullptr;
}