#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
struct Node* Push(struct Node*, int); // push it
struct Node* Pop(struct Node*);//pop it
int main()
{
	int i = 0;
	struct Node* a = NULL;
	while (i != 10)
	{
		a=Push(a, i);
		i++;
	}
	a = Pop(a);//delete the first head
}


struct Node* Push(struct Node* head, int num)
{
	struct Node* k = (struct Node*)malloc(sizeof(struct Node));
	k->data = num;
	k->next = head;
	return k;
}
struct Node* Pop(struct Node* head)
{
	if (head == NULL)
	{
		return NULL;
	}
	struct Node* h = head;
	head = head->next;
	free(h);
	return head;
}//pop it
