//handshake problem(determine the total no of handshake done)
#include <stdio.h>
int main() {
    int n;
    printf("enter the total no of persons in the room:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=(n-1);i++)
    {
       sum=sum+i;
    }
    printf("total hand shake done are:%d\n",sum);
    return 0;
}