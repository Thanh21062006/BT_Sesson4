#include <stdio.h>

int main() {
	int a;
	printf("Moi ban nhap mot thang trong nam: ");
	scanf("%d", &a);
	
	switch( a ){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Thang 12 co 31 ngay!");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Thang 11 co 30 ngay!");
			break;
		case 2:
			printf("Thang 2 co 29 ngay!");
			break;
		default:
			printf("Thang khong hop le!");
	}
	return 0;
}
