#include <stdio.h>
void add(void);
int main()
{
int a = 10;
int *p; // Declare pointer
p =  &a; //Assign address
printf("a = %d\n",a);
printf("*p = %d\n",*p);
printf("address of a =  %p\n",&a);
printf("p = %p\n",p);
add();
}

void add(void)
{

printf("add function\n");
}
 
