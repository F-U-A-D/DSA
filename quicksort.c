#include<stdio.h>
void read(int a[],int n)
{
    int i;
    printf("Enter %d elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
int partition(int a[],int start,int end)
{
    int key,i,j;
    key=a[start];
    i=start+1;
    j=end;
    do
    {
        while (i<j && a[i]<key)
        {
            i++;
        }
        while (j>start && a[j]>key)
        {
            j--;
        }
        if (i<j)
        {
            swap(&a[i],&a[j]);
        }
    } while (i<j);
    swap(&a[start],&a[j]);
    return(j);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void qsort(int a[],int start,int end)
{
    int pos;
    if(start<end)
    {
      pos=partition(a,start,end);
      qsort(a,start,pos-1);
      qsort(a,pos+1,end);  
    }
}
void print(int a[],int n)
{
    int i;
    printf("\nSorted array : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}
void main()
{
    int a[50],n;
    int start,end;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    start=0;
    end=n-1;
    read(a,n);
    qsort(a,start,end);
    print(a,n);
}