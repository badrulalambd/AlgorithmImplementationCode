#include<bits/stdc++.h>

typedef struct node Node;

struct node
{
	int data;
	Node *next;
};
Node *head = NULL;

Node *create_node(int item, Node *next)
{
	Node *new_node = (Node *)malloc(sizeof(Node));
	if(new_node == NULL)
	{
		printf("Error! could not create a new node\n");
		exit(1);
	}
	
	new_node->data = item;
	new_node->next = next;
	return new_node;
}

Node *prepend(Node *head, int item){
	Node *new_node = create_node(item,head);
	return new_node;
}
Node *append(Node *head, int item)
{
	Node *new_node = create_node(item,NULL);
	if(head == NULL)
	{
		return new_node;
	}
	Node *current_node = head;
	while(current_node->next != NULL){
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return head;
}
void insert(Node *node,int item)
{
	Node *new_node = create_node(item,node->next);
	node->next = new_node;
}
void print(Node *head)
{
	Node *current_node = head;
	while(current_node != NULL)
	{
		printf("%d	",current_node->data);
		current_node = current_node->next;
	}
	printf("\n");
}

//main function.................................................
int main()
{
	printf("Link list\n");
	//add a node at the beginning/head of the LinkList........
	head = prepend(head,15);
	head = prepend(head,10);
	head = prepend(head,20);
	//add a node at the end/tail of the LinkList.........
	head = append(head,5);
	head = append(head,25);
	head = append(head,3);
	//insert a node anywhere/middle of the linkList......
	insert(head->next,12);
	insert(head->next,13);
	insert(head->next,14);
	print(head);
	
	return 0;
}
