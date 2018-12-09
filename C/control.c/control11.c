#include <stdio.h>
int main()
{
    int n,prod=1,rem;
printf("enter a no");
scanf("%d",&n);

   while(n>0)
{
rem=n%10;
prod=prod*rem;
n=n/10;
}
    printf("prod of digits=%d\n",prod);

    return 0;
}
