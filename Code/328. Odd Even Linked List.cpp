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
		
		int count=0;
		ListNode* cur = head;
		while(cur)
		{
			count++;
			cur = cur->next;
		}
		ListNode* lastOdd = head;
		for(int i=1;i<=(count-1)/2;i++)
			lastOdd = lastOdd -> next ->next;
		ListNode *evenHead = NULL, *curEven;
		cur = head;
		for(int i=1;i<=count/2;i++)
		{
			if(!evenHead)
			{
				curEven = cur->next;
				evenHead = curEven;
			}else{
				curEven->next = cur->next;
				curEven = curEven->next;
			}
			if((i!=count/2)||(count%2!=0))
			{
				cur->next = cur->next->next;
				cur = cur->next;
			}
			curEven->next = NULL;
		}
		lastOdd->next = evenHead;
		return head;
    }
};