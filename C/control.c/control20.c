#include <stdio.h>
int main()
{
    int i,n,sum=0,term=1;
int result=0;
printf("enter no of terms");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
sum=sum+term;
term=term+i;
}
printf("the sum of series up to %d terms is %d\n",n,sum);

    return 0;
}
