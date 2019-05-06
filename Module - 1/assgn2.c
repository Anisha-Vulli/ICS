#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str[100], revstr[100];
	printf("enter a string to get reversed: \n");
	// scanf("%s", str);
	scanf("%[^\n]",str);
	int j = 0;
	// printf("%ld\n", strlen(str));
	int len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
	{
		revstr[j] = str[i];
		j++;
	}
	revstr[j] = '\0';
	// strrev(str);
	printf("Reversed string is: \n%s\n", revstr);
	return 0;
}