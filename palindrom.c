/*
#include <stdio.h>
int main(void)
{
    int t, i, num[3][4];
    for(t=0; t<3; t++)
        for(i=0; i<4; i++)
            num[t][i] = (t*4)+i+1;
    /* now print them out *
    for(t=0; t<3; ++t) {
        for(i=0; i<4; ++i)
            printf("%10d ", num[t][i]);
        printf("\n");
    }
    return 0;
}
*/
#include <stdio.h>
int main() 
{
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) 
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}