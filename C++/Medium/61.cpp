ListNode* rotateRight(ListNode* head, int k) {
    if(!head || !head->next) return head;
    auto *tail = head;
    int length = 1; //find the length of the LL
    while(tail->next) { //get the final node
        length++;
        tail = tail->next;
    }
    tail->next = head; //connect the tail to the head to make it circular
    k = k % length; //i.e. 2. Finding the mod
    k = length - k; //i.e. 3, so move 3 places
    for(int i = 0; k > i; i++) 
        tail = tail->next;
    head = tail->next;
    tail->next = nullptr;
    return head;
}
/*    k = k % length;: This line calculates the remainder of the division of k by the length of the 
linked list. The purpose of this operation is to handle cases where k is greater than the length 
of the linked list. If k is greater than or equal to the length of the linked list, the rotation by 
k is equivalent to a rotation by k % length. For example, if the length is 5 and k is 7, it's the 
same as rotating by 2 (7 % 5).

*     k = length - k;: After taking the remainder as mentioned above, this line calculates the new 
value of k by subtracting the remainder from the length of the linked list. The idea behind this is 
to find the count of nodes to be moved in the linked list. If k is less than or equal to the length, 
then length - k represents the number of nodes you need to move to the right to achieve the rotation.
*/