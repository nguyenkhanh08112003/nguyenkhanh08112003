#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Nhap gia tri cua a : ");
	scanf("%d", &a);
	printf("Nhap gia tri cua b : ");
	scanf("%d", &b);
	if(a%b==0)
	printf("a chia duoc cho b ");
	else 
	printf("a khong chia duoc cho b ");
	return 0;
}
