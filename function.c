/*
#include<stdio.h>

void printhello();  //declaration prototype

int main()          //main function
{
    printhello();       //call funtion
    printhello();
    return 0;
}


void printhello()  //define function we main write the function anywhere after declaration prototype
{
    printf("hello!!!\n");
}
*/


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// EX : 1

/*
#include<stdio.h>

int calcu(int a, int b);       // using function to calculate 

int main()
{
    int a,b;
    printf("\nenter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    int s=calcu(a,b);
    return 0;
}

int calcu(int x , int y)
{
    printf("\nthe sum of two number is %d\n",x+y);
    printf("the sub of two number is %d\n",x-y);
    printf("the div of two number is %d\n",x/y);
    printf("the remind of two number is %d\n",x%y);
    printf("the multi of two number is %d\n",x*y);
    return 0;
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// EX 2 == TABLES 
/*
#include <stdio.h>

void tables(int n);
 int main()
 {
    int n;
    tables(n);
 }

 void tables(int x)
 {
    
    printf("enter n : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d X %d = %d\n",i,n,i*n);
    return 0;

 }
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EX 3 TO FIND SQR OF NO. 
/*
#include <stdio.h>
#include<math.h>                        
int main()
{                                                            
    int n; 
    printf("enter n: ");
    scanf("%d",&n);
    printf("square of n is %f ",pow(n,2));             //pow(n,2)==n^2 --- double==%f only 
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// EX 4 TO FIND AREA OF CIRCLE ND RECTANGLE
#include<stdio.h>
#include <math.h>

float acircle(float r);
float arect(float l, float b);

int main()
{
    //float acircle(float r);
   float arect(float l,float b);
}
/*
float acircle(float r)
{
    float pi=3.14,r;
    printf("enter the value of radius: ");
    scanf("%f",&r);
    printf("area of circle : %f",pi*pow(r,2));
    return 0;
}
*/

float arect(float l,float b)
{
    float l,b;
    printf("enter l & n : ");
    scanf("%d%d",&l,&b);
    printf("area of rectangle is %f ",arect(l,b));
    return l * b;
}
