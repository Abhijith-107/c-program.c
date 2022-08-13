/*to find the sum or even or odd number*/
#include<stdio.h>
int main()
{
    int a[10],n,i,seven,sodd;
    printf("enter the no. of array :\n");
    scanf(" %d",&n);
    printf("enter numbers:\n");

    for(i=0;i<n;i++)
        scanf(" %d",&a[i]);
    printf("the elements are:\n");

    for(i=0;i<n;i++)
        printf(" %d\n",a[i]);

    for(i=0;i<n;i++)
        if(a[i]%2==0)
        {
            seven+=a[i];
        }
        printf("the sum of even number:%d\n",seven);

    for(i=0;i<n;i++)
        if(a[i]%2!=0)
        {
            sodd+=a[i];
        }
        printf("the sum of odd number:%d\n",sodd);
        
    return 0;
}