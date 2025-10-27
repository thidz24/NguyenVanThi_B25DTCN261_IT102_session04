#include <stdio.h>
 
int main() {
	int a;
	printf("nhap thang: ");
	scanf("%d ", &a);
	if(a < 1 || a > 12) {
		printf("thang khong hop le\n");
	} else {
		switch (a) {
			case 1:
			case 3:
			case 5:
			case 7:	
			case 8:
			case 10:
			case 12:
			printf("thang %d co 31 ngay\n", a);
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			printf("thang %d co 30 ngay\n", a);
			break;
			case 2:
			printf("thang %d co 28 hoac 29 ngay\n", a);
			break;	
		} 
	}
	return 0;
} 
