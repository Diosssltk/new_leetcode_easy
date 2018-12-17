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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;

        ListNode* node1 = l1;
        ListNode* node2 = l2;
        ListNode* ret;
        if (l1->val < l2->val) {
        	ret = l1;
        	l1 = l1->next;
        }
        else {
        	ret = l2;
        	l2 = l2->next;
        }
        ListNode* head = ret;

        while (l1 != nullptr && l2 != nullptr) {
        	if (l1->val < l2->val) {
        		ret->next = l1;
        		l1 = l1->next;
        		ret = ret->next;
        	}
        	else {
        		ret->next = l2;
        		l2 = l2->next;
        		ret = ret->next;
        	}
        }
        if (l1 != nullptr) ret->next = l1;
        else ret->next = l2;
        return head;
    }
};