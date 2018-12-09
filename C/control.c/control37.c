

#include<stdio.h>
#include<string.h>
int main()
{
int d,m,y;
int flag=1,isleap=0;
printf("enter date(dd/mm/yyyy)");
scanf("%d%d%d",&d,&m,&y);
if(y%100!=0 && y%4==0 || y%100==0)
isleap=1;
if(y<1800 || y>2500 || m<1 ||m>12 || d<1 ||d>31)
flag=0;
else if(m==2)
{
if(d==30 || d==31 || (d==29 && !isleap))
flag=0;
}
else if(m==4 || m==6 || m==9 || m==11)
{
if(d==31)
flag=0;
}
if(flag==0)
printf("not valid a date");
else
printf("valid date");
return 0;

}


