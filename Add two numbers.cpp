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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int start = 0;
        ListNode* node = new ListNode(0);
        ListNode* l = node;
        while (l1 || l2) {
            int sum = start;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            if (sum > 9) {
                start = 1;
                sum = sum % 10;
            }
            else {
                start = 0;
            }

            l->next = new ListNode(sum);
            l = l->next;
        }
        
        if (start) {
            l->next = new ListNode(start);
        }
        
        return node->next;
    }
};
