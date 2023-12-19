#include<stdio.h>
void simplemerge(int a[],int f,int s,int t)
{
	int i=f, j=s, k=0;
	int temp[50];
	while(i<s && j<=t)
	{
		if(a[i]<a[j])
		 temp[k++]=a[i++];
		else
		 temp[k++]=a[j++];
	}
	while(i<s)
	{
		temp[k++]=a[i++];
	}
	while(j<=t)
	{
		temp[k++]=a[j++];
	}
	for(i=f,k=0; i<=t;)
	{
		a[i++]=temp[k++];
	}
}
void mergesort(int a[],int beg,int end)
{
	if(beg<end)
	{
		int mid;
		mid=(beg+end)/2;
		mergesort(a,beg,mid);
		mergesort(a,mid+1,end);
		simplemerge(a,beg,mid+1,end);
	}
}
int main()
{
	int a[50],n,i;
	int beg,end;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	beg=0;
	end=n-1;
	printf("Enter %d elements : \n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,beg,end);
	printf("\nSorted array : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
