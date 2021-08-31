//stack implementation using single linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top=NULL,*top1,*temp;

void push();
void pop();
void display();

void main()
{
    int ch;
    while (1)
    {
	printf("1.push\n2.pop\n3.display\n4.exit\n");
	printf("Enter choice :");
	scanf("%d", &ch);

	switch (ch)
	{
	case 1: push();break;
	case 2: pop(); break;
	case 3: display();break;
	case 4: exit(0);
	default :printf(" you have entered wrong choice\n");
	}
    }
}

void push()
{
int element;
printf("enter the element\n");
scanf("%d",&element);

    if (top == NULL)	//stack is empty
    {
	top =(struct node *)malloc(sizeof(struct node));
	top->next = NULL;
	top->data = element;
    }
    else		//stack contains elements
    {
	temp =(struct node *)malloc(sizeof(struct node));
	temp->next = top;
	temp->data = element;
	top = temp;
    }

}

void pop()
{
    if (top == NULL)	//stack is empty
    {
	printf("Error :stack underflow\n");
	return;
    }
    else		//stack contains elements
    top1 = top;
    top = top->next;
    printf("Popped value : %d\n", top1->data);
    top1->next=NULL;
    free(top1);
}

void display()
{
    if (top == NULL)	//stack is empty
    {
	printf("Stack is empty\n");
	return;
    }
    top1 = top;
    printf("***Stack elements are***\n");
    while (top1 != NULL)	//stack contains elements
    {
	printf("%d\n", top1->data);
	top1 = top1->next;
    }
 }


