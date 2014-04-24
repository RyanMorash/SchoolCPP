#include <stdio.h>

int main(int argc, char **argv)
{
	//Declare Variables
	
	int width;
	int height;
	int result;
	
	printf("Calculate a Rectangle's Area\n");
	printf("\n");
	
	printf("Enter Width: ");
	scanf("%d", &width);
	
	printf("Enter Height: ");
	scanf("%d", &height);
	printf("\n");
	
	result = width * height;
	printf("The area is equal to %d", result);
	return 0;
}
