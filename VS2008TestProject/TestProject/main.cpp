#include <iostream>
#include "../../Code/328. Odd Even Linked List.cpp"
#include <string>

using namespace std;

int main()
{
	ListNode* head = new ListNode(1);
	ListNode* pre=head;

	//input test
	for(int i=2;i<=5;i++)
	{
		ListNode* node = new ListNode(i);
		pre->next = node;
		pre = node;
	}

	ListNode* cur = head;
	while(cur!=NULL)
	{
		printf("%d->",cur->val);
		cur = cur->next;
	}
	printf("\n");

	Solution s;
	ListNode* newhead = s.oddEvenList(head);

	cur=newhead;
	while(cur!=NULL)
	{
		printf("%d->",cur->val);
		cur = cur->next;
	}
	printf("\n");

	system("pause");
	return 0;
}