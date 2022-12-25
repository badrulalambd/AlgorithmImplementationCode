#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
	int data;
	Node *left;
	Node *right;
};

Node *create_tree();
Node *create_node(int);
void add_left(Node,Node);
void add_right(Node,Node);
void post_order(Node *node);

int main()
{
	Node *root = create_tree();
	printf("Root of this BinaryTree: %d\n",root->data);
	printf("Root-left: %d\n",root->left->data);
	printf("Root-right: %d\n",root->right->data);
	
	post_order(root);
	
	return 0;
}
void add_left(Node *node, Node *child){
	node->left = child;
}
void add_right(Node *node, Node *child){
	node->right = child;
}
Node *create_node(int item)
{
	Node *new_node = (Node *)malloc(sizeof(Node));
	if(new_node == NULL)
	{
		printf("Error, could not create a new node..\n");
		exit(1);
	}
		new_node->data = item;
		new_node->left = NULL;
		new_node->right = NULL;
		return new_node;
}

Node *create_tree(){
	Node *one = create_node(50);
	Node *two = create_node(25);
	Node *three = create_node(10);
	Node *four =  create_node(60);
	Node *five = create_node(5);
	Node *six = create_node(15);
	Node *seven = create_node(8);
	Node *eight = create_node(35);
	
	add_left(three,one); //here 'three' is the root node.
	add_right(three,two);
	add_left(one,four);
	add_right(one,five);
	add_left(two,six);
	add_right(two,seven);
	add_left(five,eight);
	return three;
}

void post_order(Node *node){
	
	if(node->left != NULL)
			post_order(node->left);
	if(node->right != NULL)
		post_order(node->right);
	
	printf("%d,	",node->data);
}
