/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* swapPairs(struct ListNode* head) {

    struct ListNode dummy;
    dummy.next = head;

    struct ListNode* prev = &dummy;

    while(prev->next != NULL && prev->next->next != NULL){

        struct ListNode* a = prev->next;
        struct ListNode* b = a->next;

        prev->next = b;
        a->next = b->next;
        b->next = a;

        prev = a;
    }

    return dummy.next;
}