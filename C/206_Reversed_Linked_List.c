struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* current = head;
    struct ListNode* previous = NULL;

    while (current != NULL) {
        struct ListNode* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    return previous;
}