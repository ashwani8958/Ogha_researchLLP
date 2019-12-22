#include "main.h"


void enqueue(queue_list **front, queue_list **rear, int item)
{
	queue_list *tmp;
	tmp = (queue_list *)malloc(sizeof(queue_list));
	if(tmp == NULL)
	{
		printf("Memory not available\n");
		return;
	}
	tmp->info = item;
	tmp->link = NULL;
	if(*front == NULL)		 /*If Queue is empty*/
		*front = tmp;
	else
		(*rear)->link = tmp;
	*rear = tmp;
}/*End of insert()*/
