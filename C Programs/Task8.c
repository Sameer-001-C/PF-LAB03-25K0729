#include <stdio.h>

int main(){
	int sub1;
	int sub2;
	int sub3;
	int percentage;
	printf("Please enter marks for Subject 1: ");
	scanf("%d", &sub1);
	printf("Please enter marks for Subject 2: ");
	scanf("%d", &sub2);
	printf("Please enter marks for Subject 3: ");
	scanf("%d", &sub3);
	percentage = (sub1 + sub2 + sub3)/3;
	printf("Percentage: %d", percentage);
	return 0;
}
