#include <stdio.h>

int main() {
	int day, month, year;
	printf("Moi ban nhap so ngay: ");
	scanf("%d", &day);
	printf("Moi ban nhap so thang: ");
	scanf("%d", &month);
	printf("Moi ban nhap so nam: ");
	scanf("%d", &year);
	
	if(day > 0 && day <= 31){
		if(month > 0 && month <= 12){
			if(year > 0){
				printf("ngay thang nam hop le!");
			}
			else{
				printf("ngay thang khong nam hop le!");
			}
			
		}
		else{
			printf("ngay thang khong nam hop le!");
		}
	}
	else{
		printf("ngay thang nam khong hop le!");
	}
	return 0;
}
