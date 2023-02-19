#include <stdio.h>

int main(void)
{
	char input_id[50 + 3 + 1];
	char c[3+1] = "??!";
	
	scanf("%s", &input_id);
	strcat(input_id, c);
	printf("%s", input_id);
	return 0;
}