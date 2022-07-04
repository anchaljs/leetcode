/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        int count=0;
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        
        ListNode*end=head;
        while(end->next!=NULL){
            count++;
            end=end->next;
        }
        if(count%2==0){
        count=count/2;    
        }
        else{
            count=(count+1)/2;
        }
       ListNode*temp=head;
        while(count--){
           end->next=temp->next;
            temp->next=temp->next->next;
            end->next->next=NULL;
            end=end->next;
            temp=temp->next;
        }
        return head;
    }
};