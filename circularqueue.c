#include<stdio.h>
#define size 5
int q[size];
int f=-1,r=-1;
int n=size;
int val;
int isempty()
{
	if(f==-1)
	 return(1);
	else
	 return(0);
}
int isfull()
{
	if(f==(r+1)%size)
	 return 1;
	else
	 return 0;
}
void insertq(int val)
{
	if(isempty())
	{
		f=r=0;
		q[r]=val;
	}
	else
	{
		r=(r+1)%n;
		q[r]=val;
	}
}
int deleteq()
{
	val=q[f];
	if(f==r)
	{
	 f=r=-1;
	}
	else
	{
		f=(f+1)%n;
	}
	return(val);
}
void display()
{
	int i;
	if(f<=r)
	{
		for(i=f; i<=r; i++)
		 printf("%d\t",q[i]);
	}
	else if(r<f)
	{
		for(i=0; i<size; i++)
		 printf("%d\t",q[i]);
	}
	else if(f==-1 && r==-1)
	{
		printf("\nQueue is empty");
	}
}
void main()
{
	int c,val,del;
	do
	{
		printf("\nSelect your choice : \n");
	    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
	    printf("Choice : ");
	    scanf("%d",&c);
	    switch(c)
	{
		case 1 : if(isfull())
		           printf("\nQueue is full\n");
		         else
		         {
					 printf("\nEnter the value : ");
					 scanf("%d",&val);
					 insertq(val);
				 }
				 break;
		case 2 : if(isempty())
		          printf("\nQueue is empty\n");
		         else
		         {
			      del=deleteq();
		          printf("\nDeleted value is : %d\n",del);
		         }
		         break;
		case 3 : display();
		         break;
		case 4 : printf("\nExited");
		         break;
		default: printf("\nWrong choice\n");
		         break;
	}
   }while(c!=4);
}
