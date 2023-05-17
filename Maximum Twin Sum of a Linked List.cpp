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

    int findMaxTwinSum (vector<int> v) {

        int max = 0;
        int size = v.size();
        for (int i = 0; i<size; ++i) {
            int sum = v[size-1-i] + v[i];
            if (sum>max) max = sum;
        }
        
        return max;
    }

    int pairSum (ListNode* head) {
        
        vector<int> v;
        while (head!=NULL) {
            v.push_back(head->val);
            head = head->next;
        }

        return findMaxTwinSum(v);
    }
};
