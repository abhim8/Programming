// Double Linked List
#include<stdio.h>
#include<stdlib.h>
struct node   //Each node in list will contain data, previous and next pointer
{
      struct node *prev;
	  int data;
      struct node *next;
}*start=NULL;
void insertbeg()
{
      struct node *nn;
      int a;
      nn=(struct node *)malloc(sizeof(struct node));
      printf("enter data:");
      scanf("%d",&nn->data);
      a=nn->data;
      nn->next=nn->prev=NULL;
      if(start==NULL)          //checking if List is empty
      {
      	printf("\n dll is empty, so new node inserted as start node\n");
        start=nn;
      }
      else    //list contains elements
      {
            nn->next=start;
            start->prev=nn;
            start=nn;
      }
      printf("\n %d succesfully inserted\n",a);
}
void insertend()
{
      struct node *nn,*t;
	  int b;
      nn=(struct node *)malloc(sizeof(struct node));
      printf("\n enter data:");
      scanf("%d",&nn->data);
      b=nn->data;
      nn->next=nn->prev=NULL;
      if(start==NULL)    //checking if List is empty
      {
      	printf("\n dll is empty, so new node inserted as start node\n");
        start=nn;
      }
      else    //list contains elements
      {
            t=start;
            while(t->next!=NULL)
            {
                  t=t->next;
            }
            t->next=nn;
            nn->prev=t;
        }
      printf("%d is succesfully inserted\n",b);
}
void insertmid()
{
      struct node *nn,*t=start;
	  int x,v;
      nn=(struct node *)malloc(sizeof(struct node));
      
      if(start==NULL)  //checking if List is empty
      {
            printf("dll is empty\n"); 
            return;
      }
      
		printf("\n enter data:");
      	scanf("%d",&nn->data);
      	v=nn->data;
      	nn->next=NULL;
		nn->prev=NULL;
      	printf("enter data after which no. is to be inserted:\n");
      	scanf("%d",&x);
      	while(t!=NULL && t->data!=x)
      	{
      		t=t->next;
	  	}
	  	if(t==NULL)
	  	{
	  		printf("\n data does not exist",x);
	  		return;
	  	}
	  	else
	  	{
	  		if(t->next==NULL)  // dll contains one element
	  		{
	  			t->next=nn;
				nn->prev=t;	
			}
			else
			{
				t->next->prev=nn;
	  			nn->prev=t;
	  			nn->next=t->next;
	  			t->next=nn;	
			}
	  		printf("%d succesfully inserted\n",v);
	  	}
}
void deletebeg()
{
	struct node *t=start;
	if(start==NULL)  //list is empty
	{
		printf("\n dll is empty");
		return;
	}
	else
	{
	if(start->next==NULL) //list contains single element
	{
		start=NULL;
	}
	else   //list contains more than one element
	{
		start=start->next;
		t->next=NULL;
		start->prev=NULL;
	}
}
printf("\n%d is successfully deleted",t->data);
free(t);
}
void deleteend()
{
	struct node *t=start;
	int x;
	if(start==NULL)  //list is empty
	{
		printf("\n dll is empty");
		return;
	}
	else
	{
	if(start->next==NULL) //list contains single element
	{
		start=NULL;
		printf("dll contains only one element and %d is deleted",t->data);
		free(t);
	}
	else  // list contains more elements
	{
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->prev->next=NULL;
		t->prev=NULL;
		printf("\n%d is successfully deleted",t->data);
		free(t);		
	}
}
}
void deletemid()
{
	struct node *t=start;
	int x;
	if(start==NULL)  //list is empty
	{
		printf("\n dll is empty");
		return;
	}
	else
	{
	if(start->next==NULL) //list contains single element
	{
		start=NULL;
		printf("dll contains only one element and %d is deleted",t->data);
	}
	else
	{
	  printf("enter data to be deleted:");
      scanf("%d",&x);
      while(t!=NULL && t->data!=x)
      {
      	t=t->next;
      }
	  if(t==NULL)
	  {
	  	printf("\n data does not exist",x);
	  }
	  else
	  {
	  	if(t->next==NULL)  // deleting last element in dll
	  	{
	  		printf("\ndeleting last element in dll");
			deleteend();
	  		return;
		}
		if(t->prev==NULL)   //deleting first element in dll
		{
			printf("\ndeleting first element in dll");
			deletebeg();
			return;
		}
		else    //deleting middle element in dll
		{
			t->prev->next=t->next;
	   		t->next->prev=t->prev;
	   		t->next=t->prev=NULL;	
		}
	    printf("\n%d is successfully deleted",t->data);
	    free(t);
	  }
	    
	}
}
}

void display()
{
      struct node *t;
      if(start==NULL)
      {
            printf("dll is empty\n");
            return;
      }
      printf("elements are:\n");
      t=start;
      while(t!=NULL)
      {
            printf("<--> %d",t->data);
            t=t->next;
      }
}
void main()
{
      int c,a;    
      do
      {
            printf("\n1:insert\n2:delete\n3:display\n4:exit");
	        printf("\nenter choice:");
            scanf("%d",&c);
            switch(c)
            {
                  case 1:
                  printf("1:insert at beg\n2:insert at end\n3:insert at mid");
		          printf("\nenter choice:");
                  scanf("%d",&a);
                  switch(a)
                  {
                        case 1:insertbeg();break;
                        case 2:insertend();break;
                        case 3:insertmid();break;
                  }
                  break;
                  case 2:
                  printf("1:delete at beg\n2:delete at end\n3:delete at mid");
		          printf("\nenter choice:");
                  scanf("%d",&a);
                  switch(a)
                  {
                        case 1:deletebeg();break;
                        case 2:deleteend();break;
                        case 3:deletemid();break;
                  }
                  break;
			      case 3:display();
			      break;
                  case 4:printf("program ends\n");
			      break;
                  default:printf("wrong choice\n");
                  break;
            }
      }while(c!=4);
}

