#include <stdio.h>
int main()
{
    int n,nsave,rem,d,j=1,dec=0;

printf("enter a no");
scanf("%d",&n);
nsave=n;

while(n>0)
{
rem=n%10;
d=rem*j;
dec+=d;
j*=2;
n/=10;
}
    printf("binary no=%d,decimal no=%d",nsave,dec);

    return 0;
}
