#include<stdio.h>
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=1; i<n; i++)
	{
		for(j=0; j<=(n-i); j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}
void main()
{
	int a[50],n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0; i<n; i++)
	 scanf("%d",&a[i]);
	bubblesort(a,n);
	printf("Sorted array : \n");
	for(i=0; i<n; i++)
	 printf("%d\t",a[i]);
}
