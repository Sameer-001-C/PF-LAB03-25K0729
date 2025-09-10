#include <stdio.h>

int main(){
	int a = 10;
	int b = 20;
	int temp;
	printf("Swapping Using A Third Variable:\n");
	printf("Before: a= %d, b= %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("After: a= %d, b= %d\n", a, b);
	printf("Now Swapping Without A Third Variable:\n");
	printf("Before: a= %d, b= %d\n", a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After: a= %d, b= %d", a,b);
	return 0;
}
