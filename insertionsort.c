#include<stdio.h>
void insertionsort(int a[],int n)
{
    int i,j,val;
    for ( i = 1; i < n; i++)
    {
        val=a[i];
        j=i-1;
        while (j>=0 && val<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        
        a[j+1]=val;
    }
    
}
void main()
{
    int a[50],n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter elements : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("Sorted array :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}