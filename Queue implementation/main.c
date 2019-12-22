#include "main.h"


int main()
{
	queue_list *front = NULL, *rear = NULL;
	int choice,item;
	while(1)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display the element at the front\n");
		printf("4.Display all elements of the queue\n");
		printf("5.Quit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
		case 1:
			printf("Input the element for adding in queue : ");
			scanf("%d",&item);
			enqueue(&front, &rear, item);
			break;
		case 2:
			dequeue(&front, &rear);
			break;
		case 3:
			front_item(&front);
			break;
		case 4:
			display(&front);
			break;
		case 5:
			exit(1);
		default :
			printf("Wrong choice\n");
		}/*End of switch*/
	}/*End of while*/

	return 0;
}/*End of main()*/
