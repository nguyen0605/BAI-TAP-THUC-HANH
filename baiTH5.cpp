#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    unsigned int a,count=0;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%u",&a);
    if(a<=1)
    {
    	printf("%u khong phai la so nguyen to",a);
	}
	else
	{
		for(int i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%u la so nguyen to",a);
		}
		else
		{
			printf("%u khong phai la so nguyen to",a);
		}
	}
	return 0;
}
