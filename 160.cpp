class Solution { 
public: 
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) { 
		ListNode *p1 = headA; 
		ListNode *p2 = headB; 
		while (p1 != NULL && p2 != NULL) { 
			p1 = p1->next; 
			p2 = p2->next; 
		} 
		while (p1 != NULL) { 
			headA = headA->next; 
			p1 = p1->next; 
		} 
		while (p2 != NULL) { 
			headB = headB->next; 
			p2 = p2->next; 
		} 
		while (headA != NULL && headB != NULL) { 
			if(headA == headB) return headA; 
			headA = headA->next; 
			headB = headB->next; 
		} 
		return NULL; 
	} 
};
//有趣，都从头开始，想办法找到两条路径的长度差，然后再从头遍历出来答案