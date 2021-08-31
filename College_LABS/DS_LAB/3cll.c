// Circular Linked List
#include <stdio.h>
#include <stdlib.h>
struct node //Each node in list will contain data and next pointer
{
	int data;
	struct node *next;
} *last = NULL;
void insertbeg()
{
	struct node *nn;
	int a;
	nn = (struct node *)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d", &nn->data);
	a = nn->data;
	nn->next = NULL;
	if (last == NULL) //checking if List is empty
	{
		printf("\n list is empty, so new node inserted as start node\n");
		last = nn;
		last->next = nn;
	}
	else //list contains elements
	{
		nn->next = last->next;
		last->next = nn;
	}
	printf("\n %d succesfully inserted\n", a);
}
void insertend()
{
	struct node *nn, *t;
	int b;
	nn = (struct node *)malloc(sizeof(struct node));
	printf("\n enter data:");
	scanf("%d", &nn->data);
	b = nn->data;
	nn->next = NULL;
	if (last == NULL) //checking if List is empty
	{
		printf("\n list is empty, so new node inserted as start node\n");
		last = nn;
		last->next = nn;
	}
	else //list contains elements
	{
		nn->next = last->next;
		last->next = nn;
		last = last->next;
	}
	printf("%d is succesfully inserted\n", b);
}
void insertmid()
{
	if (last == NULL) //checking if List is empty
	{
		printf("cll is empty\n");
		return;
	}
	else
	{
		if (last->next == last) //list contains one element
		{
			printf("cll contains only one node, So insert begin or end of cll");
		}
		else // list contains more than one element
		{
			struct node *nn, *t = last;
			nn = (struct node *)malloc(sizeof(struct node));
			int x, v;
			printf("\n enter data:");
			scanf("%d", &nn->data);
			v = nn->data;
			printf("enter data after which no. is to be inserted:\n");
			scanf("%d", &x);
			while (t->next != last && t->data != x)
			{
				t = t->next;
			}
			if (t != last)
			{
				nn->next = t->next;
				t->next = nn;
				printf("%d succesfully inserted\n", v);
			}
			else
			{
				printf("\n data does not exist or it is last node please choose other node", v);
			}
		}
	}
}
void deletebeg()
{
	if (last == NULL) //list is empty
	{
		printf("\n cll is empty");
	}
	else
	{
		if (last->next == last) //list contains single element
		{
			struct node *t = last;
			last = NULL;
			t->next = NULL;
			printf("\ncll contains only one element and %d is successfully deleted", t->data);
			free(t);
		}
		else //list contains more than one element
		{
			struct node *t = last->next;
			last->next = t->next;
			t->next = NULL;
			printf("\n%d is successfully deleted", t->data);
			free(t);
		}
	}
}
void deleteend()
{
	if (last == NULL) //list is empty
	{
		printf("\n cll is empty");
	}
	else
	{
		if (last->next == last) //list contains single element
		{
			struct node *t = last;
			last = NULL;
			t->next = NULL;
			printf("\ncll contains one element and %d is successfully deleted", t->data);
			free(t);
		}
		else // list contains more elements
		{
			struct node *t = last->next, *t1;
			while (t->next != last)
				t = t->next;
			t->next = last->next;
			t1 = last;
			last = t;
			t1->next = NULL;
			printf("\n%d is successfully deleted", t1->data);
			free(t1);
		}
	}
}
void deletemid()
{
	if (last == NULL) //list is empty
	{
		printf("\n cll is empty");
	}
	else
	{
		struct node *t = last, *t1;
		if (last->next == last) //list contains single element
		{
			last = NULL;
			t->next = NULL;
			printf("\ncll contains one element and %d is successfully deleted", t->data);
			free(t);
		}
		else //list contains more elements
		{
			int x;
			printf("enter data to be deleted:");
			scanf("%d", &x);
			t1 = t->next;
			while (t1->data != x && t1 != last)
			{
				t = t->next;
				t1 = t1->next;
			}
			if (t->next == last)
			{
				printf("\n data does not exist or it is last node please choose other node", x);
			}
			else
			{
				t->next = t1->next;
				t1->next = NULL;
				printf("\n%d is successfully deleted", t1->data);
				free(t1);
			}
		}
	}
}

void display()
{
	if (last == NULL)
	{
		printf("\ncll is empty");
	}
	else
	{
		struct node *t, *t1;
		t = last->next;
		t1 = t;
		printf("elements are:\n");
		while (t->next != t1)
		{
			printf("--> %d", t->data);
			t = t->next;
		}
		printf("--> %d", t->data);
	}
}
void main()
{
	int c, a;
	do
	{
		printf("\n1:insert\n2:delete\n3:display\n4:exit");
		printf("\nenter choice:");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			printf("1:insert at beg\n2:insert at end\n3:insert at mid");
			printf("\nenter choice:");
			scanf("%d", &a);
			switch (a)
			{
			case 1:
				insertbeg();
				break;
			case 2:
				insertend();
				break;
			case 3:
				insertmid();
				break;
			}
			break;
		case 2:
			printf("1:delete at beg\n2:delete at end\n3:delete at mid");
			printf("\nenter choice:");
			scanf("%d", &a);
			switch (a)
			{
			case 1:
				deletebeg();
				break;
			case 2:
				deleteend();
				break;
			case 3:
				deletemid();
				break;
			}
			break;
		case 3:
			display();
			break;
		case 4:
			printf("program ends\n");
			break;
		default:
			printf("wrong choice\n");
			break;
		}
	} while (c != 4);
}
