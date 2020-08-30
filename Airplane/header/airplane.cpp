#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

char ** Country = (char*)malloc(sizeof(char *)*23);
for(int i=0; i<22; i++) {
   	Country[i] = (char*)malloc(sizeof(char)*16);
   	strcpy(Country[i],dic[i]);
}

int * Country_num = malloc(sizeof(int)*23);
for(int i=0; i<22; i++) {
   	Country_num[i]=ndic[i];
}	


void Country_Free() {
	for(int i=0; i<22; i++) {
		free(Country[i]);
	free(Country);
	free(Country_num); 
}

struct Airplane_info {
	char Starting_Point[15];
	char Ending_Point[15];	
}

void Airplane_Reservation_Asia() {
	
} 

void Airplane_Reservation_Oceania() {

}

void Airplane_Reservation_Europe() {

}

void Airplane_Reservation_Africa() {

}

void Airplane_Reservation_NorthAmerica() {

}

void Airplane_Reservation_SouthAmerica() {

}

void Airplane_Seat() {
	bool seat[10][8];
	for (int i=0; i<10; i++) {
		for(int j=0; i<8; i++) {
			if (seat[i][j]) == false {
				printf("□ ");   
			} else {
				printf("■ ");
			}
			if (j == 4) printf("   ");
		}
		printf("\n");
	}
}

void Airplane_Time() {
	time_t tnow;
	struct tm* t;
	time(&tnow);
	t = (struct tm*) localtime(&time);
	printf("When would you like to leave??");	
	
	while(1) {
		printf("month: ");
		scanf(" %d", P_time.month);
		printf("day: ");	
		scanf("day: %d", P_time.day);		
		
		if(P_time.month >= t->tm_month + 1) {
			if(P_time.day >= t->mday) {
				break; 
			} else { printf("worng day \n");}	
		} else { printf("worng month \n");} 
	}

	for(int i=2; i<24; i+=2) {
		printf("%d o'clock   ", i);  			
		if(i / 8 == 0) printf("\n");
	}
	
	printf("What time are you going \n);"
	while(1) {
		scanf("%d", P_time.hour);
		if(P_time.hour > t_tm->hour) {
			break;		
		} else { printf("worng hour\n"); }
	}	
}

void Menual() {
	struct P_info P_info;
	while(cancel < 1) {
		printf("Whrer are you?? \n");
		scanf("s", &P_info.Starting);		
		
   		printf("Where you going?? \n");
		scanf("%s", &P_info.Ending);
     	
		for(int i=0; i<22; i++) {
			if(strcmp(Country[i], &Ending)) {
				P_info.CountryCode = Country_num[i];
				P_info.Country = Country[i];	
			}
		}

	}
}   

