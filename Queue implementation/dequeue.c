#include "main.h"


void dequeue(queue_list **front, queue_list **rear)
{
	queue_list *tmp;
	if( *front == NULL )
	{
		printf("Queue Underflow\n");
		return;
	}

	if (*front == *rear)
	{
		free(*front);
		*front = NULL;
		*rear = NULL;
		return;
	}

	tmp = *front;
	printf("Dequeue value is %d\n", tmp->info);
	*front = (*front)->link;
	free(tmp);
}/*End of del()*/
