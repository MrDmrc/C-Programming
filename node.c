#include <stdio.h>
#include <stdlib.h>

//BEYTULLAH DEMİRCİ EEE 200004180
struct node
{
	int data;
	struct node* next;
};

int print_list(struct node* n)
{
	printf("head ->");
	while(n != NULL)
	{
		printf("%d->", n->data);
		n = n->next;
	}

	printf(" NULL\n\n");

	return 0;
}

int node_search(struct node* n,int y)
{
	int x;
	int i=0;

	while( n!=NULL )
	{
		if(n->data != y)
		{
			i++;
		}
		else if (n->data == y)
		{
			x =i;
		//	break;
		}
	n = n->next;
	}

	return x;
}

void add_element(struct node *head, int val)
{
    while (head->next != NULL)
	{
        head = head->next;
    }

    head->next = (struct node*) malloc(sizeof(struct node*));
    head->next->data = val;
    head->next->next = NULL;
}


int main()
{
	struct node* head = NULL; // initially empty so null
	printf("Before adding we have:\n");
	print_list(head);

	struct node* n = malloc(sizeof(struct node)); // allocate new a node
	n->data = 100;
	n->next = head;
	head = n;
	printf("after the first node we have:\n");
	print_list(head);

	n = malloc(sizeof(struct node)); // allocate new a node
	n->data = 200;
	n->next = head;
	head = n;
	printf("after the second node we have:\n");
	print_list(head);

	n = malloc(sizeof(struct node)); // allocate new a node
	n->data = 300;
	n->next = head;
	head = n;
	printf("after the third node we have:\n");
	print_list(head);

	n = malloc(sizeof(struct node)); // allocate new a node
	n->data = 400;
	n->next = head;
	head = n;
	printf("after the forth node we have:\n");
	print_list(head);


	printf("\n\n");

	int b,a;
	printf("WARNING if there is no value you are looking for, it may appear as a 0th element\n");
	scanf("%d",&b);
	int z = node_search(head, b);
	printf("%d.Element\n",z);

	printf("write the element you want to add of end : ");
	scanf("%d",&a);
	add_element(head, a);
	print_list(head);

}
