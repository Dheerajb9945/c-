#include<stdio.h>
void main()
{
    int a[50], b[50], c[50], n, i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements for Array A\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements for Array B\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n** ONE DIMENSIONAL ARRAY ADDITION **\n");
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nThe resultant array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",c[i]);
    }
}

