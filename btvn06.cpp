#include <stdio.h>

int main() {
	float a,b, result;
	char tt;
	printf("nhap so thuc a: ");
	scanf("%f",&a);
	printf("nhap so thuc b: ");
	scanf("%f",&b);
	printf("nhap toan tu (+,-,*,/): ");
	scanf(" %c", &tt); 
	switch(tt) {
		case '+':
		result = a + b;
		printf("Ket qua : %.2f",result);
		break; 
		case '-':
		result = a - b;
		printf("Ket qua : %.2f",result);
		break;
		case '*':
		 result = a * b;
		 printf("Ket qua : %.2f", result);
		 break;
		 case '/':
		 if( b==0) {
		 	printf("Loi: khong the chia cho 0"); 
		 } else {
		 	result = a / b;
			 printf("Ket qua : %.2f",result);
		 } break;
		 default: 
		 printf("Loi: toan tu khong hop le"); 
	} 
	return 0;
} 
