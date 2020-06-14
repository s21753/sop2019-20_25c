#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv){
	FILE *f;
	FILE *bin;
	long int i;
	int c;
	int cnt;
	char nazwa[25];
	if(argc>1){
		strcpy(nazwa, argv[1]);
		
	}else{
		printf("Nazwa pliku: ");
   		fgets(nazwa);
	}
	
	f= fopen(nazwa,"r");
	fseek( f, 0, SEEK_END );
	cnt=ftell(f);
	c=fgetc(f);
	bin= fopen( "binarny", "wb");
	while(i<cnt){
		fseek(f, -i, SEEK_END);
		if(feof(f)){
			break;
		}
		fwrite(&c, sizeof(int), 1, bin);
		i++;
	}
	fclose(f);
	fclose(bin);
	return 0;
}
