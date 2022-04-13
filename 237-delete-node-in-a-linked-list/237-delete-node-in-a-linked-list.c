/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
   struct ListNode *del = node;
    node->val=node->next->val;
    node->next=node->next->next;
    return 0;
}