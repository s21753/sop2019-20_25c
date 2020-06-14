#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	
	int z=0;
	int b=0;
	int x=0;
	int i;
	printf("Podaj ile wprowadzisz liczb: ");
	scanf("%d", &x);
	for(i=0; i<x; i++){
		printf("Podaj liczbe %d -->", i+1);
		scanf("%d", &b);
		z=z+b;
	}
	printf("suma wprowadzonych liczb: %d \n", z);
	return 0;
}
