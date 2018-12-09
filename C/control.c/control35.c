#include <stdio.h>


int main()
{
   
char ch;
printf("enter your   alphabet");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("alphabet is vowel");
break;
default:
printf("alphabet is consonant\n");
}
    return 0;
}


