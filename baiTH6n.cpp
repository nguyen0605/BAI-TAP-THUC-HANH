#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    unsigned int n,num=2,count=0,prime;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%u",&n);
    printf("%u so nguyen to dau tien la: ",n);
    while(count<n)
    {
    	prime=1;
    	for(int i=2;i<=sqrt(num);i++)
    	{
    		if(num%i==0)
    		{
    			prime=0;
			}
		}
		if(prime==1)
		{
			printf("%u ",num);
			count++;
		}
		num++;
	}
	return 0;
}
