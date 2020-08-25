#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <malloc.h>
#include <time.h>

int main(void) {
	char ** Country = (char**)malloc(sizeof(char*)*22);  
	char adic[22][16]= {"Korea","Tiwan","China","Vietnam","NewZealand","Australia","Guam","Gremany","France","Monaco","Spain","Sweden","Egypt","Ghana","Kenya","Canada","USA","Cuba","Argentina","Brazil","Peru","Venezuela"};
	
	for(int i=0; i<22; i++) {
		Country[i] = (char*)malloc(sizeof(char)*16);
		strcpy(Country[i],adic[i]);
	}

	int * Country_num = malloc(sizeof(int)*23);
	int	ndic[22] = {1100,1200,1300,1400,2100,2200,2300,3100,3200,3300,3400,3500,4100,4200,4300,5100,5200,5300,6100,6200,6300};
	
	
	for(int i=0; i<21; i++) {
		num[i]=ndic[i];
		printf("%d ", num[i]);
	}
	printf("%s", Country[1]);

	return 0;
}
