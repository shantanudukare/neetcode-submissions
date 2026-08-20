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
    void reorderList(ListNode* head) {
        if(!head || !head->next)return ;
        ListNode * slow = head ;
        ListNode * fast = head ;
        while(fast && fast->next){
            slow= slow->next;
            fast= fast->next->next;
        }
        ListNode * head2 = slow->next;
        slow->next = nullptr;
        slow = head;
        ListNode * prev = nullptr;
        while(head2){
            ListNode * front = head2->next;
            head2->next=prev;
            prev = head2;
            head2=front;
        }
        while(prev){
            ListNode* front1 = slow->next;
            ListNode* front2 = prev->next;

            slow->next = prev;
            prev->next = front1;

            slow = front1;
            prev = front2;
        }
        
    }
};
