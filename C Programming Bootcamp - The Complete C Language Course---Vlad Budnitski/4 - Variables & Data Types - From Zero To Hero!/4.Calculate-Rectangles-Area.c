#include <stdio.h>

int main()
{
	double height, width ,area;
	printf("Enter height: ");
	scanf("%lf", &height);
	printf("Enter width: ");
	scanf("%lf", &width);
	area = height * width;
	printf("The area of this rectangle = %lf\n", area);
    return 0;
}