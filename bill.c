#include<stdio.h>
int main()
{
    int units;
    float amt;
    char name[10];

    /*do not add [10] in scan f */

    printf("enter customer name:\n");
    scanf("%s",&name);
    printf("enter units consumed:\n");
    scanf("%d",&units);

    if (units<0)
    {
    printf("units cannot be negetive \n");
    return 0;
    }

    if( units>0 && units<200)
    amt=100 + (units*0.80);

    else if (units>200 && units<=300)
    amt=100 + (200*0.80) + ((units-200)*0.90);

    else
    amt=100 + (200*0.80) + (100*0.90) + ((units-300)*1);

    if (units>400)
    amt=amt+(amt*0.15);
    
    printf("the customer name is: %s \nunits consumed: %d \ntotal amt:%.3f \n ",name,units,amt);
    return 0;
} 