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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int L=0;
        ListNode* temp=head;
        while(temp!=NULL){
            L++;
            temp=temp->next;
        }
        int p=L-n+1;
        if(p==1) return head->next;
        temp=head;
        int pos=1;
        while(pos!=p-1){
            temp=temp->next;
            pos++;
        }
        temp->next=temp->next->next;
        return head;
    }
};