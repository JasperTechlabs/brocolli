
#include<stdio.h>
int main()
{
	 int i,j,n;
 printf("Enter the number of lines of * to be printed\n");
 scanf("%d",&n);
 for (i=1;i<=n;i++) 
 {
 for (j=1;j<=n+1-i;j++)
 printf("%d",n+1-j);
 
 printf("\n");
 }
return 0;
}
