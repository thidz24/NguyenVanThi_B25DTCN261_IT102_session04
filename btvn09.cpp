#include <stdio.h>

int main() {
	float hsl,pc = 0,th = 0,l; 
	int snctt, cv; 
	printf("nhap so ngay cong trong thang: ");
	scanf("%d", &snctt);
	printf("nhap he so luong: ");
	scanf("%f", &hsl);
	 printf("chuc vu la (1:Nhan vien, 2:to truong, 3:quan ly): ");
	 scanf("%d", &cv);
	 if (snctt > 26) {
	 	th = (snctt - 26) * 200000; 
	 } 
	 switch(cv) {
	 	case 1:
		  pc = 500000;
		  break;
		case 2:
		  pc = 1000000;
		  break;
		case 3:
		  pc = 2000000;
		  break; 
		  default :
		  printf("Chuc vu khong hop le");   
	 }
	 l = snctt * 160000 * hsl + pc +  th;
	 printf("Tong luong = %.0f", l);
	 return 0; 
} 
