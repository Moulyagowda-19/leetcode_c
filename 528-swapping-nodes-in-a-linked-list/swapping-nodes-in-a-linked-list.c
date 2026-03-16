/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {

    struct ListNode* first = head;
    struct ListNode* second = head;
    struct ListNode* temp = head;

    // find kth node from beginning
    for(int i = 1; i < k; i++){
        first = first->next;
    }

    temp = first;

    // move first to end
    while(first->next != NULL){
        first = first->next;
        second = second->next;
    }

    // swap values
    int val = temp->val;
    temp->val = second->val;
    second->val = val;

    return head;
}