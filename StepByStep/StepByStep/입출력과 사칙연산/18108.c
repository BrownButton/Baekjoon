#include <stdio.h>

#define THAILAND_YEAR 543

int main(void)
{
	int input_year;

	scanf("%d", &input_year);
	
	printf("%d", input_year-THAILAND_YEAR);
	return 0;
}