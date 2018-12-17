// class Solution {
// public:
// 	bool hasCycle(ListNode *head) {
// 		ListNode* one = head;
// 		while(head != NULL) {
// 			one = one->next;
// 			if(one == head) return true;
// 		}
// 		return false;
// 	}
// };
// 
//这个不能这么写，因为还可能有子环。。。太真实了，，
//
class Solution {
public:
	bool hasCycle(ListNode* head) {
		if(head == NULL || head->next == NULL) return false;
		ListNode* one = head;
		ListNode* two = head;
		while(one !=NULL && two != NULL && two->next != NULL) {
			one = one->next;
			two = two->next->next;
			if(one == two) return true;
		}
		return false;
	}
};