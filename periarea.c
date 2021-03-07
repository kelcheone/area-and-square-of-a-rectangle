#include<stdio.h>
int main()
{
	int width, length, perimeter, area;
	printf("Enter Width and Length\n");
	scanf("%d%d", &width, &length);
	perimeter = (width + length ) * 2;
	printf("perimeter = %d\n",perimeter );
	area = width * length;
	printf("Area = %d\n",area );
}
