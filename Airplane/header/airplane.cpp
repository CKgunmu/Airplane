#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Country_malloc() {

char ** dic = (char*)malloc(sizeof(char *)*23);

char dic[23][16]= {"Korea","Tiwan","China","Vietnam","NewZealand","Australia",
"Guam","Gremany","France","Monaco","Spain","Sweden","Egypt","Ghana","Kenya",
"Canada","USA","Cuba","Argentina","Brazil","Peru","Venezuela"};


		
}

void Country_Free() {

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
				printf("O ");
			} else {
				printf("X ");
			}
		}
	}
}

void Menual() {
	char Ending;
	while(cancel < 1) {
   		printf("Where you going?? \n");
		scanf("%s", &Ending);
     	
		for(int i=0; i<23; i++)
 }   

