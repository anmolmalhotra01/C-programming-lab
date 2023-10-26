#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number is even");
    }
    return 0;
}