#include <algorithm> //has the gcd function here
#include <iostream>

ListNode* insertGreatestCommonDivisors(ListNode* head) {
    auto node = head;
    if (node->next)
        node = node->next;
    else 
        return head;

    auto travelNode = head;

    while(node) {
        //Calculate the gcd
        int result = __gcd(travelNode->val, node->val);

        //Create a new node and set the next pointer to the node
        ListNode* newNode = new ListNode({result, node});

        //Establish the connection
        travelNode->next = newNode;

        //Move the pointers forward
        travelNode = node;
        node = node->next;
    }

    return head;
}
