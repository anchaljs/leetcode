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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        ListNode*list=new ListNode(-1);
        ListNode*p=list;
        
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                p->next=temp1;
                temp1=temp1->next;
            }
            else{
                p->next=temp2;
                temp2=temp2->next;
            }
           p=p->next; 
        }
        
            while(temp1!=NULL){
                p->next=temp1;
                temp1=temp1->next;
                p=p->next;
            }
        
    
            while(temp2!=NULL){
                p->next=temp2;
                temp2=temp2->next;
                p=p->next;
            }
            
    
        return list->next;
        
    }
};