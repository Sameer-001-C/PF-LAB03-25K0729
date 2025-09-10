#include <stdio.h>
#include <string.h>

int main(){
	char email[100];
	char password[100];
	printf("Please enter your email address:\t");
	scanf("%s", email);
	if (strcmp(email, "admin@gmail.com") == 0) {
		printf("Please enter your password:\t");
		scanf("%s", password);
		if (strcmp(password, "admin123") == 0) {
			printf("Access Granted!");
		}
		else {
			printf("Wrong Password!");
		}
	}
	else {
		printf("Wrong Email Address!");
	}
	return 0;
}
