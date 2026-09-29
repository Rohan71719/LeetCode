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
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *nxt=NULL;
        int count=0;

        while(curr!=NULL)
        {
            curr=curr->next;
            count++;
        }
        int temp=count-n;
        ListNode *front=head;
        prev=NULL;
        if(temp==0) 
        {
            head=head->next;
            return head;
        }
        while(temp--)
        {
            prev=front;
            front=front->next;
        }
            prev->next=front->next;
            return head;
    }
};