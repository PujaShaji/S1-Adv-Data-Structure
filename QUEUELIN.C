#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
}*newnode,*temp,*ptr,*start=NULL;
void insert();
void del();
void display();
void main()
{
  int ch;
  clrscr();
  printf("Queue implementation using Linked list");
  do
  {
    printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	  insert();
	  break;
      case 2:
	  del();
	  break;
      case 3:
	  display();
	  break;
      case 4:
	  exit(0);
      default:
	  printf("\nWrong choice...!!!");
    }
   }while(ch!=4);
    getch();
}
void insert()
{
  newnode=(struct node *)malloc(sizeof(struct node *));
  printf("\nEnter the element:");
  scanf("%d",&newnode->info);
  newnode->link=NULL;
  if(start==NULL)
  {
    start=newnode;
    ptr=newnode;
  }
  else
  {
    ptr->link=newnode;
    ptr=newnode;
  }
}
void del()
{
  if(start==NULL)
    printf("\nQueue empty");
  else
  {
    temp=start;
    printf("\nDeleted element is : %d",start->info);
    start=start->link;
    free(temp);
  }
}
void display()
{
  if(start==NULL)
    printf("\nQueue empty");
  else
  {
    temp=start;
    printf("\nElement in queue are \n");
    while(temp!=NULL)
    {
      printf("%d\n",temp->info);
      temp=temp->link;
    }
  }
}