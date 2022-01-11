#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 50
int top;
int main()
{
 int choice,item,stack[size];
 Initializestack();
 clrscr();
 while(1)
 {
   printf("\n1.Push");
   printf("\n2.Pop");
   printf("\n3.Stack top element");
   printf("\n4.Display");
   printf("\n5.exit");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
	 printf("\nenter the item to be pushed:");
	 scanf("%d",&item);
	 push(stack,item);
	 break;
     case 2:
	 pop(stack,&item);
	 printf("\npopped item : %d",item);
	 break;
     case 3:
	 stacktop(stack,&item);
	 break;
     case 4:
	 display(stack);
	 break;
     case 5:
	 exit(1);
    default:
	 printf("Wrong");
   }
 }
}
Initializestack()
{
  top=-1;
  return;
}
push(int stack[],int item)
{
 if(IsStackFull())
 {
   printf("\nStack overflow");
   exit(0);
 }
 top++;
 stack[top]=item;
 return;
}
pop(int stack[],int item)
{
  if(IsStackEmpty())
  {
    printf("\nstack underflow");
    exit(0);
  }
  item=stack[top];
  top--;
  return item;
}
stacktop(int stack[])
{
  int item;
  if(top==-1)
    printf("\nStack is empty");
  else
  {
    item=stack[top];
    printf("\nThe stack top element:%d\n",item);
  }
  return;
}
display(int stack[])
{
 int i;
 if(IsStackEmpty())
 {
   printf("\nStack is empty");
   return;
 }
 printf("\nStack elements:\n");
 for(i=top;i>=0;i--)
   printf("%d\n",stack[i]);
 printf("\n");
 return;
}
IsStackFull()
{
 if(top==size-1)
   return 1;
 else
   return 0;
}
IsStackEmpty()
{
 if(top==-1)
   return 1;
 else
   return 0;
}