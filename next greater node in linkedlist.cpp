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
    vector<int> nextLargerNodes(ListNode* head) {
        int n = 0;
        auto curr = head;
        while(curr) {
            n++;
            curr = curr -> next;
        }

        vector<int> answer(n, 0);

        stack<pair<int, int>> st;
        int i = 0;
        while(head) {
            while(!st.empty() && (st.top().first) < (head -> val)) {
                int idx = st.top().second; st.pop();
                answer[idx] = head -> val;
            }
            st.push({head->val, i});
            head = head -> next;
            i++;
        }

        return answer;
    }
};
