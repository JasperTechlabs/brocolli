#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if(year%100 == 0)
        
           
                printf(" is a leap year\n");
            else
                printf(" is not a leap year");
        }
        else
{
 if(year%400 == 0)
            printf(" is a leap year" );
    
    else
        printf(" is not a leap year");
   } 
    return 0;
}

