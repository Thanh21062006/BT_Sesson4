#include <stdio.h>

int main() {
	int n;
	printf("Moi ban nhap vao mot so nguyen bat ki: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("%d la so chan! ",n);
	}
	else{
		printf("%d la so le! ",n);
	}
	return 0;
}
