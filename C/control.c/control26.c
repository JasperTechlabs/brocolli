#include <stdio.h>
int main()
{
    long num;
int dig,sum;

printf("enter no of terms");
scanf("%ld",&num);
printf("ld->",num);
do
{

sum=0;
while(num!=0)
{
dig=num%10;
sum=sum+dig;
num/=10;
}
printf("sum of digits =%d\n",sum);
num=sum;
}while(num/10!=0);

    return 0;
}
