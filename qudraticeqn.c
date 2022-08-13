/*qudratic eqn to find roots*/
/*ax^2 + bX + c*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,real,root1,root2,img,disc;
    printf("enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0||b==0||c==0)
       {
           printf("it is not a quadratic equation\n");
           return 0;
       }   
    disc=b*b-4*a*c;
    if (disc>=0)
    {
        printf("roots ar real and distinct\n");
        root1=(-b+sqrt(disc))/(2*a);
        root1=(-b-sqrt(disc))/(2*a);
        printf("\n root1=%f \nroot2=%f\n",root1,root2);
    }
    else if (disc==0)
    {
        printf("roots ar equal\n");
        root1=root2=-b/(2*a);
        printf("\n root1=%f \nroot2=%f\n",root1);
    }
    else
    {
        printf("roots and real and imaginary\n");
        real=-b/(2*a);
        img=sqrt(fabs(disc))/(2*a);
        printf("root1=%f+i%f \nroot2=%f-i%f \n",real,img,real,img);
    }
  return 0;
}
