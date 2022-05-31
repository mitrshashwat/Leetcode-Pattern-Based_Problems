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
    ListNode* deleteDuplicates(ListNode* head) {

        //1->2->3->3->4->4->5
        //  prev=>2 , cure=3, next=3
        
        if(!head){
            return head;
        }
        
        ListNode *prev = NULL; 
        ListNode *curr= head; 
        ListNode *next = curr->next;
        
       while(next){
           if(curr->val == next->val){
                while(next && next->val == curr->val){
                next = next->next;
                }
                if(!prev){
                    head = next;
                }
            else{
                prev->next = next;
            }
            }
            else{
                prev=curr;
            }
        
            curr=next;
            if(next){
                next = curr->next;
            }
       }
        
        return head;
        
    }
};