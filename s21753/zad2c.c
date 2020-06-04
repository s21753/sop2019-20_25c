#include <stdio.h>

int suma();
int main(){
int sumaliczb = suma();
printf("suma podanych liczb to: ");
printf("%d", sumaliczb);
printf("\n");
}

int suma(){
int a, b, suma;
printf("Podaj 1 liczbe: ");
scanf("%d", &a);
printf("Podaj 2 liczbe: ");
scanf("%d", &b);
suma=(a+b);
return suma;
}

