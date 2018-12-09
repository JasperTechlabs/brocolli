#include<stdio.h>
int main()
{
int num;
printf("enter a no ");
scanf("%d",&num);
if(num<0)
{
printf("number entered is negetive ")
num=-num;
}
printf("value of num=%d",num);
return 0;
}
