#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a!=0)
    {
        int dig=a%10;
        if(dig%2!=0)
        {
            printf("%d",dig);
        }
        a=a/10;
    }
    return 0;
}