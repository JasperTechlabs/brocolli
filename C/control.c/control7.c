#include <stdio.h>
int main()
{
    int n1, n2, n3,n4,total,per;
char grade;

    printf("Enter marks of four subjects ");
    scanf("%d %d%d%d",&n1,&n2,&n3,&n4);

    total=n1+n2+n3+n4;
per=total/4;
if(per>=85)
grade='A';
else if(per>70)
grade='B';
else if(per>55)
grade='c';
else if(per>40)
grade='D';
else
grade='E';
    printf("per is %d ,grade is %c", per,grade);

    return 0;
}
