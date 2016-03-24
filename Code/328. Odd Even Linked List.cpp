#include <iostream>

// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) { 
		//exclude special case
		if(!head)
			return head;

		ListNode *odd, *even, *evenHead;
		odd = head;
		even = head->next;
		evenHead = even;
		while((odd->next != NULL) && (even->next != NULL))
		{
			odd->next = odd->next->next;
			odd = odd->next;
			even->next = even->next->next;
			even = even->next;
		}
		odd->next = evenHead;
		
		return head;
    }
};