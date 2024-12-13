#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	unsigned int a;
	printf("Nhap vao mot so nguyen duong: ");
	scanf("%u",&a);
	printf("Tat ca cac uoc cua %u la: ",a);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
