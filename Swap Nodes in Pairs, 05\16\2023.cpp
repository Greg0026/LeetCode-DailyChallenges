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
    ListNode* swapPairs (ListNode* head) {
        if (head==NULL || head->next==nullptr) return head;

        ListNode* current = head;

        while (current!=NULL && current->next!=nullptr) {
            int tmp (current->val);
            current->val = current->next->val;
            current->next->val = tmp;
            current = current->next->next;
        } 
        return head;
    }
};
