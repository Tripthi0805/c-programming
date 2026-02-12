#include <stdio.h>
int main() 
{
    int num;
    int r1;
    int r2;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the start point of range:");
    scanf("%d",&r1);
    printf("Enter the end point of range:");
    scanf("%d",&r2);
    int count=0;
    for(int i=r1;i<=r2;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    printf("count=%d",count);
    return 0;
}