#include<stdio.h>
#define size 15
char a[size];
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
	a[top]=value;
	top=top+1;
}
int pop()
{
	top=top-1;
	return(a[top]);
}
void rev(char s[])
{
	int i;
	for(i=0; s[i]!='\0'; i++)
	{
		push(s[i]);
	}
	printf("\nReverse of the string : ");
	while(isempty()==0)
	{
		printf("%c",pop());
	}
	printf("\n");
}
void main()
{
	char s[15];
	printf("\nEnter the string : ");
	scanf("%s",s);
	rev(s);
}
	
