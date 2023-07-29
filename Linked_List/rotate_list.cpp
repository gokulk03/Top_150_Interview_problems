
//   Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0 || head->next==NULL){
            return head;
        }
        ListNode* curr = head;
        int count=1;
        while(curr->next!=NULL){
            curr=curr->next;
            count++;
        }
        k = k%count;
        k=count-k;
        curr->next=head;
        while(k--){
            curr=curr->next;

        }
        head=curr->next;
        curr->next=NULL;
        return head;
            
    }
};
 

