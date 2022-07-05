/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp=headA;
        ListNode*tempb=headB;
        if(headA==NULL && headB!=NULL){
            return headB;
        }
        else if (headA!=NULL && headB==NULL){
            return headA;
        }
        if(headA->next==NULL && headB->next==NULL){
            if(headA==headB){
                return headA;
            }
            else{
                return NULL;
            }
        }
        int a=0;
        int b=0;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            a++;
        }
        while(tempb!=NULL){
            tempb=tempb->next;
            b++;
        }
     ListNode*   emp=headA;
      ListNode*  empb=headB;
        if(a>b){
             count=a-b;
            while(count){
                emp=emp->next;
                count--;
            }
            
        }
        else {
            count=b-a;
            while(count){
                empb=empb->next;
                count--;
            }
        }
        
        
        while(emp!=empb){
            
            emp=emp->next;
            empb=empb->next;
        }
        if(emp==empb){
            return emp;
        }
        return NULL;
    }
};