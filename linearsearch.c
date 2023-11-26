#include<stdio.h>
void read(int a[],int n)
{
	int i;
	printf("Enter array elements :\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
}
int linearsearch(int a[],int n,int key)
{
	int i,d;
	int f=0;
	for(i=0; i<n; i++)
	{
		if(a[i]==key)
		{
			f=1;
			d=i;
			break;
		}
	}
	if(f==1)
	 return(d);
	else
	 return(-1);
}
int main()
{
	int a[50],n,key;
	int search;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	read(a,n);
	printf("\nSearch element : ");
	scanf("%d",&key);
	search=linearsearch(a,n,key);
	if(search>0)
	 printf("\nElement found at position : %d",search+1);
	else
	 printf("Element not found");
	return 0;
}
