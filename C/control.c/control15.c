#include <stdio.h>
int main()
{
    int n,count=0;
printf("enter a no");
scanf("%d",&n);
do
{
n=n/10;
count++;
}
while(n>10);
printf("no of digits=%d\n",count);
    return 0;
}
