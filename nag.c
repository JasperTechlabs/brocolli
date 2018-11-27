#include<stdio.h>
void check(int num);
int main()
{
	int arr[10],i;
printf("enter array elements  ");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
check(arr[i]);
}
return 0;
}
void check(int num)
{
	if(num%10==0)
		printf("%d is even:",num);
	else
		printf("%d is odd:",num);
}



	
