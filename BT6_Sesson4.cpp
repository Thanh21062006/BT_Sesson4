#include <stdio.h>

int main(){
	int a, b, total, save1, save2, save3, save4;
	printf("Moi ban nhap chi so cong to dien o dau thang: ");
	scanf("%d", &a);
	printf("Moi ban nhap chi so cong to dien o cuoi thang: ");
	scanf("%d", &b);
	
	//Tinh toan va xet cac truong hop:
	total = b - a;
	
	//Luu cac gia tri de goi!
	save1 = 50 * 10000;
	save2 = 50*15000 + save1;
	save3 = 50*20000 + save2;
	save4 = 50*25000 + save3;
	
	if(0 < total && total <= 50){
		printf("Voi %d kWh tien dien thang nay cua ban la: %d ",total, total*10000);
	}
	else if(50 < total && total <= 100){
		printf("Voi %d kWh tien dien thang nay cua ban la: %d ",total, (total-50)*15000 + save1);
	}
	else if(100 < total && total <= 150){
		printf("Voi %d kWh tien dien thang nay cua ban la: %d ",total, (total-100)*20000 + save2);
	}
	else if(150 < total && total <= 200){
		printf("Voi %d kWh tien dien thang nay cua ban la: %d ",total, (total-150)*25000 + save3);
	}
	else{
		printf("Voi %d kWh tien dien thang nay cua ban la: %d ",total,  (total-200)*30000 + save4);
	}
	return 0;
}
