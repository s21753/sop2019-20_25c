#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int j;
	int i;
	int x = atoi(argv[1]);
	
	for(i=x; i>0; i--){
		for(j=0; j<i; j++){
			printf(" ");
		}
		for(j=i; j<x; j++){
			printf("**");
		
		}
		if(i == x){
			printf("\n%*c*", x, ' ');
		}	
		printf("\n");
	}
	
	return 0;
}
