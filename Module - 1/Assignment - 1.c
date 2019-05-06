#include <stdio.h>
int main(int argc, char const *argv[])
{
	int char;
	while((char = getchar()) != EOF) {
		putchar(char);
		if (char == ' ') {
			while((char = getchar()) != ' ') {
				putchar(char);
			}
		}
	}
	return 0;
}