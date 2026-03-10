#include<stdio.h>
int main()
{
    int a,b,div;//a>b
    printf("Enter the value of a and b");// a=dividend,b=divisor
    scanf("%d %d", &a,&b);
    div = a % b;
    printf("the div of the a/b: %d",div);
    return 0;


}