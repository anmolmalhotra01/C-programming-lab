#include<stdio.h>
int main()
{
    int alphabet;
    char n;
    printf("enter the alphabet\n");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'|| n=='U')
    {
        printf("the alphabet is a vowel");
    }
    else
    {
        printf("it is a consonant");
    }
    return 0;
}