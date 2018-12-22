#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void get_data(char *);
char gps[50];
char valid[50];
char direc[50];
float time1;
float lati1;
float long1;

char data[100]="$GPRMC,155005,A,4916.45,N,12311.12,W,000.5,054.7,191194,020.3,E*68";
int main()
{
sscanf(data,"%[^,],%f,%[^,],%f,%[^,],%f",gps,&time1,valid,&lati1,direc,&long1);
printf("GPS=%s\n",gps);
printf("validity=%s\n",valid);
printf("direction=%s\n",direc);
printf("time=%f\n",time1);
printf("lattitude=%f\n",lati1);
printf("longitude=%f\n",long1);
}
