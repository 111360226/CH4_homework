#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char string1[20];
	char string2[] = "string literal";
	int i;


	printf("Enter a string: ");
	scanf("%s", string1);

	printf("stringl is: %s\nstring2 is: %s\n"
		"stringl with spaces between characters is: \n",
		string1, string2);

	for (i = 0; string1[i] != '\0'; i++)
		printf("%c ", string1[i]);


		printf("\n");
		system("pause");
		return 0;


}