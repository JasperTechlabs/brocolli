#include <stdio.h>
int main()
{
int a = 10;
int *p; // Declare pointer
p =  &a; //Assign address
printf("a = %d\n",a);
printf("*p = %d\n",*p);
printf("address of a =  %p\n",&a);
printf("p = %p\n",p);
}

 
