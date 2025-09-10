#include <stdio.h>

int main(){
	char name[50];
	int age;
	printf("Please enter your Name:\t");
	scanf("%s", name);
	printf("Please enter your Age:\t");
	scanf("%d", &age);
	printf("Your name is %s\nYour Age is %d", name, age);
	return 0;
}
