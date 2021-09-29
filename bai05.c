#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y,z;
	printf("day nho top:");
	scanf("%f", &x);
	printf("day lon bottom:");
	scanf("%f", &y);
	printf("chieu cao height:");
	scanf("%f", &z);
	
	printf("dien tich hinh thang =%f", (x+y)*z/2);
	
	
	return 0;
}
