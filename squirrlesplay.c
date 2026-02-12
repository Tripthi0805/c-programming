#include <stdio.h>
int main() {
    int temp, summer;
    printf("Enter the temperature:");
    scanf("%d",&temp);
    printf("Enter 1 for summer \t 0 for not summer:");
    scanf("%d",&summer);
    if(summer)
    {
        if(temp>=60&&temp<=100)
        {
            printf("true");
        }
        else
        {
            printf("flase");
        }
    }
    else
    {
        if(temp>=40 && temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("flase");
        }
    }
    return 0;
}