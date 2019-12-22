#include "main.h"


void display(queue_list **front)
{
	queue_list *ptr;
	ptr = *front;
	if(*front == NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements :\n\n");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->link;
	}
	printf("\n\n");
}/*End of display()*/
