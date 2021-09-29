#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float t,l,h;
	printf("nhap diem toan:\n");
	scanf("%f", &t);
	printf("nhap diem ly:\n");
	scanf("%f", &l);
	printf("nhap diem hoa:\n");
	scanf("%f", &h);
	
	printf("tong diem:%f\n", t+l+h);
	printf("dtb:%f\n", (t+l+h)/3);
	
	
	
	return 0;
}
