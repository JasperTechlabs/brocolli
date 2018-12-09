

#include<stdio.h>

int main()

{
int i,days,start;

printf("Enter number of days in month:",days);
scanf("%d", &days);
printf("Enter starting day of the week (1=Sun, 7=Sat):",start);
scanf("%d", &start);

for(i=1;i<=days;i++)
    {     
printf("%3d", i);   
if(i == 7 || i == 14 || i == 21 || i == 28)
    {
    printf("\n");
    }
    }

return 0;

}


