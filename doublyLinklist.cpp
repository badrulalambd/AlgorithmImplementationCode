#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

typedef struct node Node;
struct node{
	int data;
	Node *next;
	struct node *prev;
};
Node * head = NULL;

int main()
{
	printf("Implementation Doubly Linklist\n");
	return 0;
}
