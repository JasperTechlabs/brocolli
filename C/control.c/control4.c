#include <stdio.h>
int main()
{
    int x,y,rem,quo;
    printf("Enter two number: ");
    scanf("%d%d", &x,&y);

   if(y)
    {
quo=x/y;
rem=x%y;
printf("quotient=%d,remainder=%d",quo,rem);
    }
else
    printf("divide by zero error");

    return 0;
}
