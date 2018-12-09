#include <stdio.h>


int main()
{
    int n;
for(n=1;n<=5;n++)
{
if(n==3)
continue;
printf("number=%d",n);
}
printf("out of the loop");

    return 0;
}


