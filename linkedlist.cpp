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
    bool isPalindrome(ListNode* head) {
       // [1,2,2,1]
       ListNode *slow=head ,*fast=head , *curr=head, *dummy=NULL, *nex, *mid;
       int len=0;
       if( head== NULL || head->next==NULL) return true;
       // tortoise
       while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        len++;
       }
       mid=slow;
       //slow is middle 
       //reverse the half
    
       while(slow!=NULL){
        nex=slow->next;
        slow->next=dummy;
        dummy=slow;
        slow=nex;
    
       }
       // 2nd half is reversed now compare
       while (dummy!=NULL){
        if(curr->val != dummy->val){
            return false;
        }
        curr=curr->next;
        dummy=dummy->next;
       }
       return true; 
    }
};
