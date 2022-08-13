#include <stdio.h>
int main()
{
    float a,b,result;
    int r;
    char ch;
    printf("enter an operator(+,-,*,/)\n");
    scanf("%c",ch);
    printf("enter two values\n");
    scanf("%f%f",a,b);
    switch(ch)
    {
    case '+': result=a+b;
    printf("after adding we get %f + %f = %f",a,b,result);
    break;
    }
return 0;
}


