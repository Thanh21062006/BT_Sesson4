#include <stdio.h>

int main() {
	int number;
	printf("Moi ban nhap vao mot so bat ki de kiem tra: ");
	scanf("%d", &number);
	
	if(number > 0){
		printf("%d la so nguyen duong! ",number);
	}
	else{
		printf("%d la so nguyen am! ",number);
	}
	return 0;
}
