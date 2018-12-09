
#include<stdio.h>
int main()
{
	 int i,j,n,p;
 printf("Enter the number of lines of * to be printed\n");
 scanf("%d",&n);
 for (i=1;i<=n;i++) 
 {
 for (j=1;j<=i;j++)
 
 printf(" ");
p=n;
for (j=1;j<=n-i+1;j++)
printf("%d",p--);
p=p+2;
for (j=1;j<=n-i;j++)
 printf("%d",p++);

 
 printf("\n");
 }
return 0;
}
