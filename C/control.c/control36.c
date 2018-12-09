#include <stdio.h>


int main()
{
    int choice;
while(1)
{
printf("1.create database\n");
printf("2.insert new record\n");
printf("3.modified record");
printf("4.delete a recod\n");
printf("5.display all records");
printf("6.exit");
printf("enter your  choice ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("data base created\n");
break;
case 2:
printf("record inserted\n");
break;
case 3:
printf("record modified\n");
break;
case 4:

printf("record deleted\n");
break;
case 5:
printf("record displyed\n");
break;
case 6:
exit(1);
default:
printf("wrong choice\n");
}}
    return 0;
}


