// Stack Implementation Using Array
#include<stdio.h>
#include<stdlib.h>
#define max 10
int top=-1, stack[max];
void push();
void pop();
void display();
void main()
{
int choice;
while(1)
{
printf("\n\n***** Stack MENU *****\n");
printf("1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1: push();break;
case 2: pop();break;
case 3: display();break;
case 4:exit(0);
default: printf("Wrong selection!!! Try again!!!\n");
}
}
}
void push()
{
int element;
if(top==max-1)
printf("Stack is Full!!! Insertion is not possible!!!(stack overflows)\n");
else
{
printf("enter the element\n");
scanf("%d",&element);
stack[++top]=element;
printf("\nInsertion success!!!");
}
}
void pop()
{
int element;
if(top==-1)
printf("Stack is Empty!!! Deletion is not possible!!!(stack underflows)\n");
else
{
printf("the element %d at position %d is deleted\n",stack[top],top);
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
printf("Stack is Empty!!!(stack underflows)\n");
else
{
for(i=top;i>=0;i--)
{
printf("the element at position%d: %d\n",i,stack[i]);
}
}
}
