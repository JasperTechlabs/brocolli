#include <stdio.h>
int main()
{
    int a,b,i;
int result=0;
printf("enter two no multiplied");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
result=a*b;

printf("%d*%d=%d\n",a,b,result);
}
    return 0;
}
