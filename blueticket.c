#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the value in A:");
    scanf("%d",&a);
    printf("Enter the value in B:");
    scanf("%d",&b);
    printf("Enter the value in C:");
    scanf("%d",&c);
    int ab=a+b;
    int bc=b+c;
    int ac=a+c;
    if(ab==10 || bc==10 || ac==10)
    {
        printf("10");
    }
    else if(a>10 || b>10 || c>10)
    {
        printf("5");
    }
    else
    {
        printf("0");   
    }
    return 0;
}