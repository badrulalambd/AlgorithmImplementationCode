/*
It's an implementation of Circular queue
*/
#include<bits/stdc++.h>

using namespace std;

#define MAX_SIZE 5

typedef struct{
	int head; //front
	int tail; //rear
	int data[MAX_SIZE];
}Queue;

void enQueue(Queue*, int);
int deQueue(Queue*);

int main()
{
	int item;
	Queue my_queue;
	my_queue.head = 0;
	my_queue.tail = 0;
	
	enQueue(&my_queue,5);
	enQueue(&my_queue,15);
	enQueue(&my_queue,10);
	enQueue(&my_queue,8);
	
	item = deQueue(&my_queue);
	if(item == -1)
		printf("Queue is EMPTY\n");
	else
		printf("%d is DEQUEUED\n",my_queue.data[item]);
	item = deQueue(&my_queue);
	if(item == -1)
		printf("Queue is EMPTY\n");
	else
		printf("%d is DEQUEUED\n",my_queue.data[item]);
	item = deQueue(&my_queue);
	if(item == -1)
		printf("Queue is EMPTY\n");
	else
		printf("%d is DEQUEUED\n",my_queue.data[item]);
	item = deQueue(&my_queue);
	if(item == -1)
		printf("Queue is EMPTY\n");
	else
		printf("%d is DEQUEUED\n",my_queue.data[item]);
	item = deQueue(&my_queue);
	if(item == -1)
		printf("Queue is EMPTY\n");
	else
		printf("%d is DEQUEUED\n",my_queue.data[item]);
	
	enQueue(&my_queue,1);
	enQueue(&my_queue,3);
	enQueue(&my_queue,5);
	enQueue(&my_queue,7);
	enQueue(&my_queue,9);
			
	return 0;
}

//ENQUEUE Implementation..............................
void enQueue(Queue *q, int x)
{
	int n;
	n = (q->tail+1)%MAX_SIZE;
	 if(n == q->head)
	 {
	 	printf("Queue is FULL\n");
	 }
	 else
	 {
	 	q->data[q->tail] = x;
	 	q->tail = n;
	 }
}

//DE-QUEUE Implementation.................................
int deQueue(Queue *q)
{
	int item;
	if(q->head == q->tail)
	{
		return - 1;
	}
	else
	{
		item = q->head;
		q->head = (q->head + 1)%MAX_SIZE;
		return item;
	}
}
