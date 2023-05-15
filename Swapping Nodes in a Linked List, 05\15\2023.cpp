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

    ListNode* createLinkedList (vector<int> v) {

        ListNode* tmp = new ListNode();
        ListNode* head = tmp;

        for (auto& el : v) {
            tmp->next = new ListNode(el);
            tmp = tmp->next;
        }

        return head->next;
    }

    ListNode* swapNodes (ListNode* head, int k) {

        vector<int> v;
        while (head!=NULL) {
            v.push_back(head->val);
            head = head->next;
        }

        swap(v[k-1], v[v.size()-k]);
        return createLinkedList(v);
    }
};
