#include <stdio.h>

int main() {
	int a, b, c;
	printf("Moi ban nhap canh a cua tam giac: ");
	scanf("%d", &a);
	printf("Moi ban nhap canh b cua tam giac: ");
	scanf("%d", &b);
	printf("Moi ban nhap canh c cua tam giac: ");
	scanf("%d", &c);
	
	if(a+b>c && a+c>b && b+c>a){
		printf("%d %d %d la ba canh cua tam giac!",a ,b, c);
	}
	else{
			printf("%d %d %d khong phai la ba canh cua tam giac!",a ,b, c);
	}
	return 0;
}
