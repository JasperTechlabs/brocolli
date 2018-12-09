#include <stdio.h>
#include <math.h>

int main()
{
    int n;

printf("enter number");
scanf("%d",&n);
if(n%2==0)
goto even;
else 
goto odd;
even:

printf("no is even ");
goto end;
odd:
printf("no is odd ");
goto end;
end:
printf("\n");
    return 0;
}


