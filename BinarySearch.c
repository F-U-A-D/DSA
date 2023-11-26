//binary search for sorted arrays
#include<stdio.h>
void read(int a[],int n)
{
	int i;
	printf("Enter array elements : \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
}
int binarysearch(int a[],int n,int key)
{
	int top=0;
	int bottom=(n-1);
	int mid;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(a[mid]==key)
		 return(mid);
		else if(key<a[mid])
		 bottom=mid-1;
		else
		 top=mid+1;
	}
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
	search=binarysearch(a,n,key);
	if(search>0)
	 printf("\nElement found at position : %d",search+1);
	else
	 printf("\nElement not found");
	return 0;
}
