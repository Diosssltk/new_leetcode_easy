class Solution{ 
public: 
	ListNode* removeElements(ListNode* head, int val) { 
		while(head != NULL && head->val == val) { 
			ListNode* deleteN = head; 
			head = deleteN->next; 
			delete deleteN; 
		} 
		if(head == NULL) return NULL; 
		ListNode* cur = head; 
		while(cur->next!=NULL) { 
			if(cur->next->val == val) { 
				ListNode* deleteN = cur->next; 
				cur->next = deleteN->next; 
				delete deleteN; 
			} 
			else cur = cur->next; 
		} 
		return head; 
	} 
};
//没什么可说的。。。
