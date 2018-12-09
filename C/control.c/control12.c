#include <stdio.h>
int main()
{
    int n,num;
long fact=1;
printf("enter a no");
scanf("%d",&n);
num=n;
if(n<0)
printf("no factorial of negetive no\n");
else
{
while(n>1)
{
fact*=n;
n--;
}
    printf("pfactorial of %d=%ld\n",num,fact);
}
    return 0;
}
