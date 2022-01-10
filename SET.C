#include<stdio.h>
void input();
void display();
void Union();
void insert();
void diff();
int a[]={0,0,0,0,0,0,0,0,0};
int b[]={0,0,0,0,0,0,0,0,0};
int c[]={0,0,0,0,0,0,0,0,0};
void main()
{
  int ch;
  clrscr();
  printf("SET OPERATION\n");
  do
  {
   printf("\n1.input\n2.union\n3.intersection\n4.difference\n5.exit\n");
   printf("\nenter the choice:");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:
	  input();
	  break;
     case 2:
	  Union();
	  break;
     case 3:
	  insert();
	  break;
     case 4:
	  diff();
	  break;
     case 5:
	  exit(0);
     default:
	  printf("\ninvalid choice");
   }
  }while(ch!=5);
}
void input()
{
  int n1,n2,x,i;
  printf("\nenter size of set1:");
  scanf("%d",&n1);
  printf("\nenter elements of set1:");
  for(i=1;i<=n1;i++)
  {
    scanf("%d",&x);
    a[x]=1;
  }
  printf("\nenter size of set2:");
  scanf("%d",&n2);
  printf("\nenter elements of set2:");
  for(i=1;i<=n2;i++)
  {
    scanf("%d",&x);
    b[x]=1;
  }
  printf("\nset1:{");
  for(i=1;i<=9;i++)
  {
    printf("%d",a[i]);
  }
  printf("}");
  printf("\nset2:{");
  for(i=1;i<=9;i++)
  {
    printf("%d",b[i]);
  }
  printf("}");
}
void display(int c[])
{
  int i;
  printf("\n\t\t{");
  for(i=1;i<=9;i++)
  {
    if(c[i]!=0)
       printf("%d",i);
  }
  printf("}");
}
void Union()
{
  int c[10],i;
  for(i=1;i<=9;i++)
  {
    if(a[i]!=b[i])
      c[i]=1;
    else
      c[i]=a[i];
  }
  printf("\nset is {");
  for(i=1;i<=9;i++)
  {
    printf("%d",c[i]);
  }
  printf("}");
  display(c);
}
void insert()
{
  int c[10],i;
  for(i=1;i<=9;i++)
  {
    if(a[i]==b[i])
       c[i]=a[i];
    else
       c[i]=0;
  }
  printf("\nset is {");
  for(i=1;i<=9;i++)
  {
    printf("%d",c[i]);
  }
  printf("}");
  display(c);
}
void diff()
{
  int c[10],i;
  for(i=1;i<=9;i++)
  {
    if(a[i]==1&&b[i]==0)
       c[i]=1;
    else
       c[i]=0;
  }
  printf("\nset is:{");
  for(i=1;i<=9;i++)
  {
    printf("%d",c[i]);
  }
  printf("}");
  display(c);
}
