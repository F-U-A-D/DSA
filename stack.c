#include<stdio.h>
#define size 6
int s[size];
int top=0;
int isfull()
{
	if(top>=size)
	 return(1);
	else
	 return(0);
}
int isempty()
{
	if(top==0)
	 return(1);
	else
	 return(0);
}
void push(int value)
{
	s[top]=value;
	top=top+1;
}
int pop()
{
	top=top-1;
	return(s[top]);
}
int peek()
{
	return(s[top-1]);
}
void display()
{
	int i;
	for(i=top-1; i>=0; i--)
	 printf("%d\t",s[i]);
}
void main()
{
	int c,value;
	do
	{
	printf("\nSelect your choice : \n");
	printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
	printf("Choice : ");
	scanf("%d",&c);
	switch(c)
	{
		case 1 : if(isfull())
		           printf("\nStack is full");
		         else
		         {
					 printf("\nEnter the value : ");
					 scanf("%d",&value);
					 push(value);
				 }
				 break;
		case 2 : if(isempty())
		          printf("\nStack is empty");
		         else
		          printf("Popped value is : %d",pop());
		         break;
		case 3 : if(isempty())
		          printf("\nStack is empty");
		         else
		          printf("value is : %d",peek());
		         break;
		case 4 : if(isempty())
		          printf("\nStack is empty");
		         else
		          display();
		         break;
		case 5 : printf("\nExited");
		         break;
		default: printf("\nWrong choice");
		         break;
	}
   }while(c!=5);
}

