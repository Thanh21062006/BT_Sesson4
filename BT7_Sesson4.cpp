#include <stdio.h>

int main() {
	int year;
	printf("Moi ban nhap vao mot bat ki: ");
	scanf("%d", &year);
	
	if(year % 4 == 0){
		if(year % 400 == 0 || year % 100 != 0){
			printf("%d la nam nhuan!",year);
		}
		else{
			printf("%d khong phai la nam nhuan!",year);
		}
	}
	else{
		printf("%d khong phai la nam nhuan!",year);
		}
	return 0;
}
