#include <stdio.h>

int main(){
	int length;
	int width;
	int area;
	int perimeter;
	printf("Please enter lenth of your rectangle: ");
	scanf("%d", &length);
	printf("Please enter width of your rectangle: ");
	scanf("%d", &width);
	area = length * width;
	perimeter = 2*(length + width);
	printf("The Area of your Rectangle is: %d\n", area);
	printf("The Perimeter of your Rectangle is: %d\n", perimeter);
	return 0;
}
