#include <stdio.h>


int main()
{
    int a,b;
char op;
printf("enter your   numbers operator");
scanf("%c%d%d",&op,&a,&b);
switch(op)
{
case '+':
printf("result=%d\n",a+b);
break;
case '-':
printf("result=%d\n",a-b);
break;
case '%':
printf("result=%d\n",a%b);
break;
case '/':
printf("result=%d\n",a/b);
break;
default:
printf("enter valid operators\n");
}
    return 0;
}


