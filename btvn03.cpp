#include <stdio.h>

int main() {
	int a;
	printf("nhap so nguyen bat ki: ");
	scanf("%d", &a);
	if(a % 3 == 0) {
		printf("%d chia het cho 3\n", a); 
	} else if(a % 5 == 0){
		printf("%d chia het cho 5\n", a);
	} else if(a % 3 == 0 && a % 5 == 0) {
		printf ("%d chia het cho 3 va 5\n", a);
	} else {
		printf("%d khong chia het cho ca 5 va 3", a); 
	} 
	 return 0;
} 
