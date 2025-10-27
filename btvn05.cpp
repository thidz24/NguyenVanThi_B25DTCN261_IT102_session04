#include <stdio.h>

int main() {
	int a;
	float gg = 20000,gtt;
	printf("nhap so tuoi: ");
	scanf("%d", &a);
	if(a < 0 || a > 150) {
		printf("Tuoi khong hop le"); 
	} 
	if( a < 6) {
		gtt = gg * 0; 
		printf("So tien ve: %.0f VND", gtt); 
	} else if(a <= 18) {
		gtt = gg * 0.5;
		printf("So tien ve: %.0f VND", gtt);
	} else if(a <= 60) {
		gtt = gg * 1;
		printf("So tien ve: %.0f VND", gtt); 
	} else {
		gtt = gg * 0.7;
		printf("So tien ve: %.0f VND", gtt);
	} 
	return 0; 
} 
