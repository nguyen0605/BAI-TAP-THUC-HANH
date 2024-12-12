#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int Sogio, Mucluong, luongCoban;
	printf("Nhap vao so gio lam: ");
	scanf("%d",&Sogio);
	printf("Nhap vao muc luong theo gio(ngan dong/ 1 gio): ");
	scanf("%d",&Mucluong);
	luongCoban=Sogio*Mucluong;
	if(Sogio>744 || Sogio<0)
	{
		printf("So nhap vao khong hop le!\n");
	}
	else if(Sogio>160)
	{
		int phucap=luongCoban*0.1;
		int tongTienluong=luongCoban+phucap;
		printf("luong co ban %d\n",luongCoban);
		printf("Phu cap %d\n",phucap);
		printf("Tong tien luong %d\n",tongTienluong);
	}
	else 
	{
		printf("luong co ban %d",luongCoban);
	}
	return 0;
}
