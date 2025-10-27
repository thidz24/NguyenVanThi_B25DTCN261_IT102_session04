#include <stdio.h>

int main() {
	char w;
	printf("nhap vao mot ky tu duy nhat: ");
	scanf("%c", &w);
	if(w >= 'a' && w <= 'z') {
		w = w - 32;
		printf("Chu hoa tuong ung: %c", w);
	} else if (w >= 'A' && w <= 'Z') {
		w = w + 32;
		printf("Chu thuong tuong ung: %c", w); 
	} else {
		printf("khong phai chu cai"); 
	} 
	return 0; 
}
