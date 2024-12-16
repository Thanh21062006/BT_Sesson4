#include <stdio.h>

int main() {
	int a, b, c;
	printf("Moi ban nhap vao so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("Moi ban nhap vao so nguyen thu hai: ");
	scanf("%d", &b);
	printf("Moi ban nhap vao so nguyen thu ba: ");
	scanf("%d", &c);
	
	if(c > a && c < b || c > b && c < a){
		printf("%d nam trong khoang %d va %d ", c, a, b);
	} 
	else{
			printf("%d khong nam trong khoang %d va %d ", c, a, b);	
	}
	return 0;
}
