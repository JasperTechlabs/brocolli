#include <stdio.h>
#include <math.h>

int main()
{
    int i=1,n,sum=0;
float avg;
printf("enter 10 positive no");
while(i<=10)
{

printf("enter number=%d",i);
scanf("%d",&n);
if(n<0)

{
printf("enter positve no ");
continue;
}
sum=sum+n;
i++;
}
avg=sum/10.0;
printf("sum=%d,avg=%f",sum,avg);
    return 0;
}


