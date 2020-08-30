#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <malloc.h>
#include <time.h>

struct Passenger_Time {
    int month;
    int day;
    int hour;
}P_time;


void Airplane_Time() {
	struct Passenger_Time P_time;
    int check = 1;
    time_t tnow;
    struct tm* t;
    time(&tnow);
    t = (struct tm*) localtime(&tnow);

    while(check) {
		printf("When would you like to leave??\n" );    
		printf("month: ");
		scanf(" %d",&P_time.month);
		printf("Day: ");
		scanf(" %d",&P_time.day);
        
		if(P_time.month >= t->tm_mon+1) {
			if(P_time.day >= t->tm_mday) {
            	break;
        	} else { printf("worng day \n"); }
		} else { printf("worng month\n"); }
    }
	
 	
    for(int i=2; i<=24; i+=2) {
        printf("%d o'clock   ", i);
        if(i % 8 == 0) printf("\n");
    }

	printf("What time are you going? \n");
    while(check) {
		scanf(" %d", &P_time.hour);
		if(P_time.hour >= t->tm_hour) {
            break;
        } else { printf("worng hour\n"); }
    }
	
	printf("happy");
}

int main(void) {

	char ** Country = (char**)malloc(sizeof(char*)*22);  
	char adic[22][16]= {"Korea","Tiwan","China","Vietnam","NewZealand","Australia","Guam","Gremany","France","Monaco","Spain","Sweden","Egypt","Ghana","Kenya","Canada","USA","Cuba","Argentina","Brazil","Peru","Venezuela"};
	
	for(int i=0; i<22; i++) {
		Country[i] = (char*)malloc(sizeof(char)*16);
		strcpy(Country[i],adic[i]);
	}

	int * num = malloc(sizeof(int)*23);
	int	ndic[22] = {1100,1200,1300,1400,2100,2200,2300,3100,3200,3300,3400,3500,4100,4200,4300,5100,5200,5300,6100,6200,6300};
	
	for(int i=0; i<21; i++) {
		num[i]=ndic[i];	
	}
	
	Airplane_Time();
	return 0;
}
