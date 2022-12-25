/*
Space-Complexity : O(1)
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>

using namespace std;

#define STACK_MAX 10

typedef struct
{
	int top;
	int data[STACK_MAX];
}Stack;

void push(Stack *,int);
int pop(Stack *);
int main()
{
	printf("Stack Implementation\n");
	int item;
	Stack my_stack;
	my_stack.top = 0;
	
	item = pop(&my_stack);
	if(item == -1)
		printf("STACK IS UNDERFLOW\n");
	else
		printf("%d is popped\n",my_stack.data[item]);
	
	push(&my_stack,5);
	push(&my_stack,10);
	push(&my_stack,25);
	push(&my_stack,4);
	item = pop(&my_stack);
	if(item == -1)
		printf("STACK IS UNDERFLOW\n");
	else
		printf("%d is popped\n",my_stack.data[item]);
	
	push(&my_stack,50);
	push(&my_stack,10);
	push(&my_stack,15);
	push(&my_stack,20);
	item = pop(&my_stack);
	if(item == -1)
		printf("STACK IS UNDERFLOW\n");
	else
		printf("%d is popped\n",my_stack.data[item]);
	
	push(&my_stack,30);
	push(&my_stack,11);
	push(&my_stack,7);
	push(&my_stack,22);
	item = pop(&my_stack);
	if(item == -1)
		printf("STACK IS UNDERFLOW\n");
	else
		printf("%d is popped\n",my_stack.data[item]);
	
	push(&my_stack,30);
	push(&my_stack,11);
	push(&my_stack,7);
	push(&my_stack,22);
	item = pop(&my_stack);
	if(item == -1)
		printf("STACK IS UNDERFLOW\n");
	else
		printf("%d is popped\n",my_stack.data[item]);
	
	return 0;
}
//Implementation of push data to the stack.................
void push(Stack *s, int item)
{
	if(s->top<STACK_MAX){
		s->data[s->top] = item;
		s->top = s->top + 1;
	}
	else{
		printf("STACK IS OVERFLOW\n");
	}
}
//Implementation of pop data from the stack ...............
int pop(Stack *s)
{
	int item;
	if(s->top == 0)
		return -1;
	else{
		s->top = s->top - 1;
		item = s->top;
		return item;
	}
}
