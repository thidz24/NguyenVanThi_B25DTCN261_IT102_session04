#include <stdio.h>
 
int main() {
	float a, b1,b2,b3,b4; 
	printf("nhap so m khoi muon mua: ");
	scanf("%f", &a);
	if(a < 0) {
		printf("so nhap khong duoc nho hon 0"); 
	} 
	if (a < 11 ) {
		b1 = 6000 * a;
		printf("Tong tien: %.0f VND", b1);
	} else if(a < 21) {
		b2 = 6000 * 10  + 7000 * (a -10); 
		printf("Tong tien: %.0f VND", b2); 
	} else if(a < 30 ) {
		b3 = 6000 * 10  + 7000 * 10 + 8500 * (a -20);
		printf("Tong tien: %.0f VND", b3); 
	} else {
		b4 = 6000 * 10 + 7000 * 10 + 8500 * 10 + 10000 * (a - 30);
		printf("Tong tien: %.0f VND", b4); 
	} 
	return 1000 ; 
} 
