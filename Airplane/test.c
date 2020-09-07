#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <malloc.h>
#include <time.h>

struct Passenger_Info {
	char Starting[16];
	char Ending[16];	
	int Seat;
}P_info;


struct Passenger_Time {
    int month;
    int day;
    int hour;
}P_time;


char dic[22][16]= {
	"Korea","Tiwan","China","Vietnam",
	"NewZealand","Australia","Guam",
	"Gremany","France","Monaco","Spain","Sweden",
	"Egypt","Ghana","Kenya",
	"Canada","USA","Cuba",
	"Argentina","Brazil","Peru","Venezuela"
};

int ndic[22] = {
	1100,1200,1300,1400,
	2100,2200,2300,
	3100,3200,3300,3400,3500,
	4100,4200,4300,
	5100,5200,5300,
	6100,6200,6300,6400
};

int seat[41] = {0};


void Airplane_Time() {
    int check = 1;
    time_t tnow;
    struct tm* t;
    time(&tnow);
    t = (struct tm*) localtime(&tnow);

    while(check) {
		printf("When would you like to leave??\n" );    
		printf("month: ");
		scanf(" %d", &P_time.month);
		printf("Day: ");
		scanf(" %d", &P_time.day);
        
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
	
	
}

void Airplane_Seat() {
	int seats;
	for (int i=1; i<41; i++) {
		if (seat[i] == 0) {
			printf("□ ");   
		} else {
			printf("■ ");
		}

		if ( i % 4 == 0 ) printf("  ");
		if ( i % 8 == 0 ) printf("\n");
		
	}
	
	printf("Choice Seat: ");
	scanf(" %d", &P_info.Seat);
		
}

void Airplane_information() {
	printf("Starting: %s\n", P_info.Starting);
	printf("Ending  : %s\n", P_info.Ending);
	printf("SeatNum : %d\n", P_info.Seat);
	printf("TakeoffTime: %d %d %d\n", P_time.month, P_time.day, P_time.hour );
	printf("Have a good Day");
		
}

int main(void) {
	
//		while(cancel < 1) {
		seat[10] = 1;
		seat[20] = 1;
		seat[30] = 1;
		seat[40] = 1;
		int check = 22;
	
		printf("Whrer are you?? ");
		scanf(" %s", &P_info.Starting);		
		
   		printf("Where you going?? ");
		scanf(" %s", &P_info.Ending);
				
//		while(check)     	
		for(int i=0; i<22; i++) {
			if(strcmp(dic[i], P_info.Starting)){
//				P_info.CountryCode = Country_num[i];
//				P_info.Country = Country[i];

				break;	
			} 
		}
		
//	}
	Airplane_Time();
	Airplane_Seat();
	Airplane_information();

	return 0;
}
