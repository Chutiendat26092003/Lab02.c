#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,x;
	printf("chieu dai hcn =\n");
	scanf("%f", &a);
	printf("chieu rong hcn =\n");
	scanf("%f", &b);
	
	printf("chu vi hcn = %f\n", (a+b)*2);
	printf("dien tich hcn = %f\n", a*b);
	
	
	
	printf("canh hv =\n");
	scanf("%f", &x);
	
	printf("chu vi hv = %f\n", x*4);
	printf("dien tich hv = %f\n", x*x);
	
	
	return 0;
}
