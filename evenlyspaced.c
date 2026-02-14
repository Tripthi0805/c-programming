/*given three ints a,b,c.one of them is small,one is medium and one is large.return true if the three values are evenly spaced, so the difference between small and medium is the same as the difference between medium and large*/
#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    int big,small,med;
    if(a>b&&a>c)
    {
        big=a;
        if(b>c)
        {
            med=b;
            small=c;
        }
        else
        {
            med=c;
            small=b;
        }
    }
    else if(b>a&&b>c)
    {
        big=b;
        if(a>c)
        {
            med=a;
            small=c;
        }
        else
        {
            med=c;
            small=a;
        }
    }
    else
    {
        big=c;
        if(b>a)
        {
        med=b;
        small=a;
        }
        else
        {
            med=a;
            small=b;
        }
    }
    if(small-med==med-big)
    {
        printf("true");
    }
    else
    {
        printf("flase");
    }
    return 0;
}