#include "main.h"


void front_item(queue_list **front)
{
	if( *front == NULL )
	{
		printf("Queue Underflow\n");
		return;
	}
	printf("Front value in queue is %d\n", (*front)->info);
}/*End of peek()*/
