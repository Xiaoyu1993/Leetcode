#include <iostream>
#include "../../Code/328. Odd Even Linked List.cpp"
#include <string>

using namespace std;

int main()
{
	ListNode* head = new ListNode(1);
	ListNode* pre=head;

	for(int i=2;i<=5;i++)
	{
		ListNode* node = new ListNode(i);
		pre->next = node;
		pre = node;
	}

	Solution s;
	ListNode* newhead = s.oddEvenList(head);

	ListNode* cur=newhead;
	while(cur!=NULL)
	{
		printf("%d->",cur->val);
		cur = cur->next;
	}

	system("pause");
	return 0;
}