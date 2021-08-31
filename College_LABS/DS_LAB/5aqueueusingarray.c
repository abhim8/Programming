//Queue implementation using Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 6
int queue[max],front=-1,rear=-1;
void add();
void del();
void display();
void main()
{
int choice;
while(1)
{
printf("enter the choice\n");
printf("\n1.Add\n2.Delete\n3.Display\n4.Exit\n");
printf("\nenter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: add();break;
case 2: del();break;
case 3: display();break;
case 4:exit(0);
default: printf("you have entered wrong choice\n");
}
}
}
void add()
{
int element;
if(rear==max-1)
printf("queue is full\n");
else
{
if(front==-1)
front=0;
printf("enter the element\n");
scanf("%d",&element);
queue[++rear]=element;
}
}
void del()
{
int element;
if(front==-1)
printf("queue is empty\n");
else
{
printf("the element%d at position%d is deleted\n",queue[front-1],++front);
if(front>rear)
{
front=-1;
rear=-1;
}
}
}
void display()
{
int i;
if(front==-1)
printf("queue is an empty\n");
else
{
printf("Queue elements:\n");
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}
}
