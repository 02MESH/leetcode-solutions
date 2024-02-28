//Sliding the pointers
ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(!head || !head->next) return nullptr;
    auto dummy = new ListNode(0);
    dummy->next = head;
    auto fast = dummy;
    auto slow = dummy;
    for(int i = 0; n >= i; i++) 
        fast = fast->next;
    while(fast) {
        fast = fast->next;
        slow = slow->next;
    }
    auto deleteNode = slow->next;
    slow->next = deleteNode->next;
    delete deleteNode;
    return dummy->next;
}

//Using the counter
ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(!head || !head->next) return nullptr;

    //Finding the length of the chain
    auto copy = head;
    int length = 1; //chain is not empty
    while(copy->next) {
        copy = copy->next;
        length++;
    }

    //Check whether if it is the last node in the chain
    if(length - n == 0) {
        auto deleteNode = head;
        head = head->next;
        delete deleteNode;
        return head;
    }

    //Traverse to the node otherwise
    copy = head;
    for(int i = 0; length-n-1 > i; i++)
        copy = copy->next;

    //Delete the node now
    auto deleteNode = copy->next;
    copy->next = copy->next->next;
    delete deleteNode;
    
    return head;
}