#include <stdio.h>
#include <string.h>

int main() {
	char Nationality[50];
	int Age;
	printf("Please Enter Your Age:\t");
	scanf("%d", &Age);
	if (Age > 17) {
		printf("Please Enter Your Nationality:\t");
		scanf("%s", Nationality);
		if (strcmp(Nationality, "Pakistani") == 0) {
			printf("Eligible!");
		}
		else {
			printf("Ineligible. Wrong Nationality!");
		}
	}
	else {
		printf("Ineligible. Underage!");
	}
	return 0;
}
