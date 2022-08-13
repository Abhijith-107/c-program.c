#include<stdio.h>
int main()
{
    int i,a[20],n,j,temp;
    printf("enter the number of arrays:\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for (i=0;i<n;i++)
        scanf(" %d",&a[i]);
    printf("the orginals elements ar:\n");
    for (i=0;i<n;i++)
        printf("%d\n",a[i]);
    for (i=0;i<n-1;i++)
        {
            for (j=0;j<n-i-1;j++)
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        }
    printf("\nafter sorted:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}