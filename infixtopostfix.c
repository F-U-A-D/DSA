#include<stdio.h>
#define size 10
char infix[50];
char postfix[50];
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
char push(char value)
{
	s[top]=value;
	top=top+1;
}
char pop()
{
	top=top-1;
	return(s[top]);
}
char peek()
{
	return(s[top-1]);
}
int instackpriority(char c)
{
	switch(c)
	{
		case'+' :
		case'-' : return(2);
		          break;
		case'*' :  
		case'/' : return(4);
				  break;
		case'^' : return(5);
				  break;
		case'(' : return(0);
				  break;
	}
}
int inputpriority(char c)
{
	switch(c)
	{
		case'+' : 
		case'-' : return(1);
				  break;
		case'*' : 
		case'/' : return(2);
				  break;
		case'^' : return(6);
				  break;
	}
}
void main()
{
	int i=0, j=0;
	char c;
	printf("\nEnter infix : ");
	gets(infix);
	while(infix[i]!='\0')
	{
		switch(infix[i])
		{
			case'(' : push(infix[i]);
					  break;
			case'+' :
			case'-' :
			case'*' :
			case'/' :
			case'^' : while(!isempty() && instackpriority(peek()) > inputpriority(infix[i]))
					  {
						  postfix[j++]=pop();
					  }
					  push(infix[i]);
					  break;
		    case')' : while((c=pop())!='(')
					   postfix[j++]=c;
					  break;
			default : postfix[j++]=infix[i];
		}
		i++;
	}
	while(!isempty())
	 postfix[j++]=pop();
	postfix[j]='\0';
	printf("\nPostfix : %s",postfix);
}
