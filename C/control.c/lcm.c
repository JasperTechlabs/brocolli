#include <stdio.h>
int main()
{
    int n1, n2, minMultiple, val1, val2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in minMultiple
    minMultiple = (n1>n2) ? n1 : n2;

    // Always true
    while(1)
    {
		val1 = minMultiple%n1;
		 val2 = minMultiple%n2;
	printf(" value of val1=%d and val2=%d :\n",val1,val2);
        if( val1==0 && val2==0 )
        {
		
            printf("\n The LCM of %d and %d is %d. ", n1, n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}


