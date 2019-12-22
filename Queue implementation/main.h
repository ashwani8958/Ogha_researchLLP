#include<stdio.h>
#include<stdlib.h>

#ifndef MAIN_H
#define MAIN_H


typedef struct
{
	int info;
	struct node *link;
}queue_list;


void enqueue(queue_list **front, queue_list **rear, int item);
void dequeue(queue_list **front, queue_list **rear);
void front_item(queue_list **front);
void display();

#endif
